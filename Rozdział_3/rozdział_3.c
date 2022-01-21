
#include <stdio.h>  
#include <stdlib.h>
#define rok_sekund 3.156e+023f

/*----------------------------------------------------------------------- Zad 1 - przepełnienie zmiennych ------------------------------------------------------------------------------------------------- */
int zad_1(void)
{
    int calkowita = -99999999999999275558;  
    unsigned int nieujemna= -9;
    double a=1.19999999999999999999;
    float b=0.42;
    printf("%d \n %d \n %f \n %.5f",calkowita, nieujemna, a, b);
    
}

/*-------------------------------------------------------------------------------- Zad 2 - Kod ASCII --------------------------------------------------------------------------------------------------- */
int zad_2()
{
    int ASCII;
    printf("po wprowadzeniu kodu ASCII program wyswietla znak odpowiadajacy tej wartosci\n");
    printf("Podaj kod ASCII znaku\n");
    scanf("%d",&ASCII);
    printf("Kod %d w ASCII oznacza \"%c\"",ASCII, ASCII);
}
/*-----------------------------------------------------------------------Zad 3 - Program wydający sygnał dźwiękowy-------------------------------------------------------------------------------------- */
int zad_3()
{
    printf("\aSally, przerazona nespodziewanym odglosem, krzyknela \"A niech mnie, co to bylo!?\"");
}
/*-----------------------------------------------------------------------Zad 4 - Liczba w postaci wykladniczej -------------------------------------------------------------------------------------- */
int zad_4()
{   
    float liczba;
    printf("podaj liczbe zmiennoprzecinkowa:\n");
    scanf("%f",&liczba);
    printf("Podana liczba to %f lub %e",liczba,liczba);
}
/*-----------------------------------------------------------------------Zad 5 - Przeliczanie lat na sekundy -------------------------------------------------------------------------------------- */
int zad_5()
{
    int wiek;
    printf("program przelicza twoj wiek na sekundy \n");
    printf("Ile masz lat \n");
    scanf("%d",&wiek);
    printf("Twoj wiek w sekundach to: %.2f sec",wiek*rok_sekund);

}
/*-----------------------------------------------------------------------Zad 6 - Liczba cząsteczek wody -------------------------------------------------------------------------------------- */
int zad_6()
{
    int litry;
    int gramy;
    printf("program pobiera objetosc wody w litrach i wyswietla liczbe czasteczek w tej objetosci \n");
    printf("Podaj ilosc wody: \n");
    scanf("%d",&litry);
    gramy=litry*1000;
    printf("Podana objetosc wody zawiera %.0f czasteczek",gramy/3.0e-23);
}
int main(void)
{
    zad_6();
    
}

