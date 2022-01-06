//                                                                  y=ax^2+bx+c
//                                                   Program oblicza pierwiastki funkcji kwadratowej
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    float a,b,c,x,delta;
    x=0;
    printf("podaj parametr a, b, c \n");
    scanf("%f %f %f", &a, &b, &c);
    printf("%f %f %f\n",a,b,c);
    if(a==0)
    {
        printf("to jest funkcja liniowa\n");
        if (b==0)
        {
            printf("Funkcja nie ma rozwiazan");
        }
        else if (c==0)
        {
            printf("Rozwiazaniem tej funkcji jest x= 0\n");
        }
        else if (b==0 && c==0)
        {
             printf("Rozwiazaniem tej funkcji jest kazda liczba rzeczywista\n");
        }
        else 
        {
            x= -c / b;
            printf("Rozwiazaniem tej funkcji jest x= %.2f\n",x);
        }
    }
    else
    {
        if (c==0)
        {
            printf("Rozwiazaniem tej funkcji jest x= 0 i x= %.2f\n",-b/a);
        }
        else if (b==0)
        {
            printf("Rozwiazaniem tej funkcji jest x= %.2f i x= %.2f\n",sqrt(c),-sqrt(c));
        }
        else
        {
            delta= powf(b,2)-4*a*c; 
            if (delta<0)
            {
                printf("Funkcja nie ma rozwiazan");
            }
            else if (delta=0)
            {
                printf("Rozwiazaniem tej funkcji jest x= %.2f\n",sqrt(delta)/2*a);
            }
            else
            {
                printf("Rozwiazaniem tej funkcji jest x= %.2f i x= %.2f\n",-b-sqrt(delta)/2*a,-b+sqrt(c));
            }
        }
        
    }
    return 0;
}