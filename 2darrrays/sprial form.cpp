#include<iostream>
using namespace std;
void accept(int a[][100],int m,int n);
void accept(int a[][100],int m,int n)
{
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
}
int main()
{
	int a[100][100],m,n;
	cin>>m>>n;
	accept(a,m,n);
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			cout<<a[j][i];
		}
	}
	return 0;
}
