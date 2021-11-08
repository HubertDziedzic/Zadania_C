//mnożenie, potęgowanie
#include<stdio.h>
#include<math.h>
int main(void)
{
    int liczba, liczba2, liczba3;
    liczba=10;
    liczba2=liczba*2;
    liczba3=pow(liczba,2);
    printf("%d, %d*%d=%d, %d do kwadratu to %d",liczba, liczba, liczba, liczba2,liczba,liczba3);
    return 0;
}
