#include<iostream>
#include<cmath>
using namespace std;
void accept(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
void bubblesort(int a[],int n)
{
	for(int i=0;i<n-1;i++)
	{  int  flag=0;
		for(int j=0;j<n-i-1;j++)
		{	if(a[j]>a[j+1])
		{
			swap(a[j],a[j+1]);
			flag=1;
		}
    	}
    	if(flag==0)
			break;
    
	}
}
	

void display(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
}
int main()
{
	int a[100],n;
	cin>>n;
	accept(a,n);
	bubblesort(a,n);
	display(a,n);
	return 0;
}
