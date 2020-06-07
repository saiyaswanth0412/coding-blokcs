#include<iostream>
#include<stdio.h>
using namespace std;
bool isBoolean(int arr[],int n)
{
	if(n==1)
	{
		return true;//base condition
	}
	//recursive function
	if(arr[0]<arr[1]&&isBoolean(arr+1,n-1))
	{
		return true;
	}
	return false;
}
void accept(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int main()
{
	int a[100],n;
	cin>>n;
	accept(a,n);
	cout<<isBoolean(a,n)<<endl;
	return 0;
}
