// Ćwiczenie rozdział 1
// Przeliczanie cali na centymetry (1cal = 2.54cm)
#include <stdio.h>
int main(void)
{
    float cal, cm;
    printf("Podaj liczbe cali \n"); 
    scanf("%f",&cal);
        cm = cal*2.54;
    printf("%.2f cali jest rowne %.2f centymetrow",cal, cm);
    return 0;
}