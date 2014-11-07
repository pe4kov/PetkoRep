#include <iostream>
using namespace std;
int main ()
{
int a,o,g=0;
cin>>a;
  for(o=2; o<a; o++)
    {
        if(a%o==0)
        {
        g=1;
        break;
        }
    }
    if (g==0)
        cout << "Prosto";
    else
    cout<<"Sastavno";
        return 0;
}
