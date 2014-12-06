#include <iostream>
using namespace std;
double xN (double x, unsigned int N)
{
    if (N == 1) return x;
    return x * xN(x, N -1);
}
int main ( void )
{
    unsigned int a;
    double b;
    cout<<"Enter Number to rate: ";
    cin >>a;
    cout<<"Enter module: ";
    cin >>b;
    cout <<a << " ^ " <<b << " å = " << xN (a, b);
    return 0;
}
