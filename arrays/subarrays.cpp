#include<iostream>
#include<algorithm>
using namespace std;
void accept(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}

int main()
{
	int  a[1000];int n;
	cin>>n;
	accept(a,n);
	for(int i=0;i<n;i++)
	{
		for(int j=i;j<n;j++)
		{
			for(int k=i;k<=j;k++)
			{
				cout<<a[k]<<" ";
			}
			cout<<endl;
		}
	}
	return 0;
	
}
