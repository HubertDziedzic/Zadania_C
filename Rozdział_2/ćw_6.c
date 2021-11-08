//Dodatkowa funkcja z napisem do wyświetlania
#include<stdio.h>
void tekst(void);
void tekst(void)
{
    printf("Usmiech! ");
}

int main(void)
{
    tekst();tekst();tekst();
    printf("\n");tekst();tekst();
    printf("\n");tekst();
   return 0;
}
