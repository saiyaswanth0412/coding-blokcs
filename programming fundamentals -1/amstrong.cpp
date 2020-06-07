#include<iostream>
#include<bits/stdc++.h> 
using namespace std;
int main(){
	long long int n,a,same,ans=0;
	cin>>a;
    same=a;
    n=a;
	int c=0;
	while(a!=0){
	    a/=10;
	    c++;
	}
	while(n!=0){
		ans=ans+pow(n%10,c);
		n/=10;
	}
	if(same==ans)
		cout<<"true"<<endl;
	else
		cout<<"false"<<endl;
	return 0;
}
