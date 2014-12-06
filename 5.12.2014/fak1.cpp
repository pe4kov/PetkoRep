#include <iostream>
#include <conio.h>
using namespace std;
long int faktorial ( int N )
{
    if (N==0 || N==1) return 1;
    return N * faktorial (N-1);
}
int main ( void )
{
    int n;
    cout<< "Enter number: ";
    cin >> n;
    cout  << n << "! = " << faktorial ( n ) ;
    getch ( ) ;
    return 0;
}
