#include<iostream>
using namespace std;
void seieve(long long int *p,long long int n)
{	long long int i,j;
	for(i=3;i<=n;i+=2)
	{
		p[i]=1;
	}
	for( i=3;i<=n;i+=2)
	{
		if(p[i]==1)
		{
			for( j=i*i;j<=n;j+=i)
			{
				p[j]=0;
			}
		}
	}
	p[2]=1;
	p[0]=p[1]=0;
}
int main()
{
	long long int a,i;
	cin>>a;
	long long int *p=new long long int[a];
	seieve(p,a);
	for( i=0;i<=a;i++)
	{
		if(p[i]==1)
		{
			cout<<i<<" ";
		}
	}
	return 0;
}
