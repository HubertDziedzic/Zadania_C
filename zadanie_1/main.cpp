#include <iostream>
using namespace std;

int main()
{
    double a, b;
    cout << "PROGRAM PRZELICZAJACY CALE NA CENTYMETRY\n"; // 1 cal = 2.54 cm
    cout << "Podal liczbe cali do przeliczenia \n";
    cin >>a;
         b=a*2.54;
    cout << a<<" cali to "<<b<<" cm\n";   
}