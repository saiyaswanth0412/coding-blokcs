#include<iostream>
#include <bits/stdc++.h> 
#include<cmath>
using namespace std;
int findzeros(long long int a)
{		int i=1;
	int no_of_zeros=0;
	while(a/pow(5,i)>0)
	{
		no_of_zeros+=a/pow(5,i);
		i++;
	}
	return no_of_zeros;
}
int main () {
	long long int a;
	cin>>a;

	cout<<findzeros(a);
	
	return 0;
}

