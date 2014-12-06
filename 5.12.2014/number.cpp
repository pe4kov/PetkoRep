#include <iostream>
using namespace std;
int sumN ( unsigned long int x )
{
    if (x < 10) return x;
    return x%10 + sumN (x / 10);
}
int main ( )
{
    unsigned long int n;
    cout << "Enter number to find the total : " ;
    cin >> n ;
    cout << " Total of the numbers " << n << " å = " << sumN ( n ) ;
    return 0;
}
