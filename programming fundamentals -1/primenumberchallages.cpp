#include<iostream>
#include <climits> 
using namespace std;
int main() {
	int n;
	cin>>n;
	bool a=true;
	if(n==1){
		cout>>"Not a prime number"<<endl;
	}
	for(int i=2;i<=n/2;i++)
	{
		if(n%i==0)
		a=false;
		break;
	}
	if(a==true)
	{
		cout<<"Prime number"<<endl;
	}
	else
		cout<<"Not a Prime Number"<<endl;
	return 0;
}
