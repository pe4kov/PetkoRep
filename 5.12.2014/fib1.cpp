#include <iostream>
#include <conio.h>
using namespace std;
long int fib ( int N )
{
    if ( N == 1 || N == 2 ) return 1;
    return fib ( N – 2 ) + fib ( N – 1 ) ;
}
int main ( void )
{
    int n;
    cout<<"Enter number of element : ";
    cin >>n;
    cout <<n << "-th number of the fibonachi row  = " << fib ( n );
    getch ( ) ;
    return 0;
 }
