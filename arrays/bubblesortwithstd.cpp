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
bool compare(int a,int b)
{
	return a<b;//as if b is greater than a then the swap will perform and b will be first as it is a descending order//
}
void bubblesort(int a[],int n,bool (&cmp)(int a,int b))//didnt teach till now will teach in next classes//
{
	for(int i=0;i<n-1;i++)
	{  int  flag=0;
		for(int j=0;j<n-i-1;j++)
		{	if(compare(a[j],a[j+1]))
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
	bubblesort(a,n,compare);
	display(a,n);
	return 0;
}
