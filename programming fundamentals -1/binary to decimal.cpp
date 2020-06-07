#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long int n,ans=0;
	cin>>n;
	int i=0;
	while(n!=0){
		ans+=(n%10)*pow(2,i);
		i++;
		n/=10;	
	}
	cout<<ans<<endl;
	return 0;
}
