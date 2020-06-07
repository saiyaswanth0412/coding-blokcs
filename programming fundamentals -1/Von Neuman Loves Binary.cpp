#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{   int number;
	cin>>number;
	long long int n,ans;
	while(number>0){
	cin>>n;
	ans=0;
		int i=0;
	while(n!=0){
		ans+=(n%10)*pow(2,i);
		i++;
		n/=10;	
	}
	cout<<ans<<endl;
	number--;
	}

	return 0;
}
