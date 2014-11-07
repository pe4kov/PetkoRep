#include <iostream>
using namespace std;
int main()
{
    long dec, temp, bit, i=1, sum=0;
    cout << "Enter the decimal number: ";
    cin >> dec;
    temp = dec;
    while(temp > 0)
    {
        bit = temp & 1;
        sum = sum + (i * bit);
        temp = temp / 2;
        i = i * 10;
    }

    cout <<"The binary of " << dec << " is: " << sum << endl;

    return 0;
}
