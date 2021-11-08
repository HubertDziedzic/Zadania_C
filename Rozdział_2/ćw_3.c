//przeliczanie wieku (lat) na dni
#include<stdio.h>
#define ROK 365
int main(void)
{
    int wiek, dni;
    printf("Ile masz lat?\n");
    scanf("%d",&wiek);
    dni=wiek * ROK;
    printf("Twoj wiek w dniach: %d\n", dni);
    return 0;
}
