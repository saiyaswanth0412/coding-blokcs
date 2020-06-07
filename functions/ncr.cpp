#include<iostream>
#include<cmath>
using namespace std;
int facto(int n)
{
	int fact=1;
	for(int i=1;i<=n;i++)
	{
		fact*=i;
	}
	return fact;
}
int ncr(int n,int r)
{
	return (facto(n)/facto(n-r)*facto(r));
}
int main()
{
	int n,r;
	cin>>n,r;
	cout<<ncr(n,r)<<endl;
	return 0;
	
}
