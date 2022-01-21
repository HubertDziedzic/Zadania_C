#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*---------------------------------------------------------------- zad_1 ----------------------------------------------------------------*/
int zad_1()
{
    int imie[40],nazwisko[40];

    printf("Podaj swoje imie \n");   
    scanf("%s",imie);
    printf("Podaj swoje nazwisko\n");
    scanf("%s",nazwisko);
    printf("%s %s",nazwisko,imie);
}
/*---------------------------------------------------------------- zad_2 ----------------------------------------------------------------*/
int zad_2()
{
    int imie[40];
    int trzy[3];
    printf("podaj swoje imie \n");
    scanf("%s",imie);
    printf("\"%s\"\n",imie);
    printf("\"%20s\"\n",imie);
    printf("\"%-20s\"\n",imie);
    printf("\"%s%3s\"",imie,trzy);
}
/*---------------------------------------------------------------- zad_3 ----------------------------------------------------------------*/
int zad_3()
{
    float liczba=0.0;
    printf("podaj liczbe zmiennoprzecinkowa\n");
    scanf("%f",&liczba);
    printf("wpisano liczbe %f lub %e\n", liczba,liczba);
}
/*---------------------------------------------------------------- zad_4 ----------------------------------------------------------------*/
int zad_4()
{
    char imie[40];
    float wzrost;
    printf("Podaj swoje imie \n");
    scanf("%s",imie);
    printf("podaj swoj wzrost w cm \n");
    scanf("%f",&wzrost);
    printf("%s masz %.2f metrow wzrostu\n",imie,wzrost/100);
}
/*---------------------------------------------------------------- zad_5 ----------------------------------------------------------------*/
int zad_5()
{
    int li,ln,i;
    char imie[40],nazwisko[40];

    printf("Podaj swoje imie \n");
    scanf("%s",imie);
    printf("podaj swoje nazwisko\n");
    scanf("%s",nazwisko);

    li=strlen(imie);
    ln=strlen(nazwisko);
    printf ("%s %s\n%*d %*d\n",imie,nazwisko,li,li,ln,ln);
   
   
}
int main()
{

    zad_5();
}