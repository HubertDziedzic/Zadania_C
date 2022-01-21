#include <stdio.h>
#include <math.h>
#define MIN_W_GODZ 60
/*=============================================================================== ZAD_1 - ====================================================================================== */
int zad_1()
{
    int min,m;
    int godz=0;
    printf("program przelicza minuty na godziny i minuty\n");
    printf("podaj liczbe minut: \n");
    scanf("%d",&min);
    m = min%MIN_W_GODZ;
    while(min>=MIN_W_GODZ)
        {
        min=min-MIN_W_GODZ;
        ++godz;
        }
    printf("%d godzin i %d minut",godz,min);
}
/*=============================================================================== ZAD_1 - ====================================================================================== */
int zad_2()
{
    int pierwsza,ostatnia;
    printf("program wyswietla wszystkie liczby calkowite od podanej wartosci do wartosci wiekszej o 10\n");
    printf("podaj licze calkowita\n");
    scanf("%d",&pierwsza);
    ostatnia=pierwsza+10;
    while(ostatnia>=pierwsza)
    {
        printf("%d ",pierwsza);
        ++pierwsza;
    }

}
/*=============================================================================== ZAD_3 - ====================================================================================== */
int zad_3()
{
    int l_dni,dni;
    int tygodni=0;
    printf("program przelicza liczbe dni na liczbe tygodni i lczbe dni\n");
    printf("podaj liczbe dni:\n");
    scanf("%d",&l_dni);

    dni=l_dni%7;

    while(l_dni>=7)
    {
        l_dni=l_dni-7;
        ++tygodni;
    }
    printf("%d tyg. i %d dni",tygodni,dni);
}
/*=============================================================================== ZAD_4 - ====================================================================================== */
int zad_4()
{
    int licznik,suma,liczba;

    printf("podaj liczbe calkowita\n");
    scanf("%d",&liczba);
    licznik= 0;
    suma = 0;
    while (licznik++<liczba)
        {
            suma=suma+licznik;
        }
            printf("suma = %d\n",suma);
            
}
/*=============================================================================== ZAD_5 - ====================================================================================== */
int zad_5()
{
    int dzien,suma,kwadrat,licznik;
    printf("ile zarobisz w podana ilosc dni");
    printf("podaj liczbe dni\n");
    scanf("%d",&dzien);
    licznik=0;
    suma=0;

    while(licznik++<dzien)
    {
        kwadrat=licznik*licznik;
        suma=suma+kwadrat;
    }
            printf("w %d dni zarobisz %d zl\n",dzien,suma);
            
}
/*=============================================================================== ZAD_6 - ====================================================================================== */
int zad_6(void)
{
    double a;
    printf("podaj liczbe\n");
    scanf("%f",&a);
    kw(a);

}
int kw(int x)
{
   x=x*x*x;
   printf("%f",x);
   
}
int main(void)
{
    zad_6();

    return 0;
}
