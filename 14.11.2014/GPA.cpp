#include<iostream>
using namespace std;
int main ()
{
double n,avg,sum=0.0;
int count = 0;
do
{
cout<<"Enter single grade: ";
cin>>n;
count++;
sum+=n;
}
while (n!=0);
avg = sum/(count-1);
cout<<"The GPA is "<<avg<<endl;


return 0;
}
