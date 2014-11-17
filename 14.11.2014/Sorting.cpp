#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
	int data[8],n,temp,i,j;
	printf("Enter number of elements: ");
	scanf("%d",&n);
	printf("Enter elements: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&data[i]);
	}
	for(i=1;i<n;i++)
	{
		temp = data[i];
		j=i-1;
		while(temp<data[j] && j>=0)
		{
			data[j+1] = data[j];
			--j;
		}
		data[j+1]=temp;
	}
	printf("In ascending order: ");
	for(i=0; i<n; i++)
		printf("%d\t",data[i]);
    return 0;
}
//това е кодът който изпълнява задачата, ако правилно съм разбрал условието
