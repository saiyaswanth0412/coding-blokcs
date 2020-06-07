#include<iostream>
#include<bits/stdc++.h>
#include<cmath>
using namespace std;
bool prime(int n)
{
	int i;
	for(int i=2;i<=n-1;i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	if(i==n){
	return true;
	}
}
void printPrimes(int n)
{
	for(int i=2;i<=n;i++)
	{
		if(prime(i)==1)
			cout<<i<<endl;
	}
}
int main()
{	int n;
	cin>>n;
	printPrimes(n);
	return 0;
}

