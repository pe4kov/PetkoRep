#include <iostream>
#include <string>
using namespace std;
int main()
{
    string classmates[20];
    for(int i=1; i<=20; i++)
    {
        cout << "Enter name for number " << i << endl;
        getline(cin, classmates[i-1]);
    }
    for(int j=1; j<=20; j++)
    {
        cout << j << " : " << classmates[j-1] << endl;
    }
}
