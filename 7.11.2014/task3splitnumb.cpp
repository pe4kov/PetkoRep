#include<iostream>
using namespace std;
int main()
{int z;
cout<<"vavedete chetiricifreno chislo:";
cin>>z;
int a,b,c,d;
a=z/1000;
b=z/100%10;
c=z/10%10;
d=z%10;
cout<<"Hilqdni:"<<a<<endl;

cout<<"Stotici:"<<b<<endl;

cout<<"Desetici:"<<c<<endl;

cout<<"Edinici:"<<d<<endl;

return 0;
}
