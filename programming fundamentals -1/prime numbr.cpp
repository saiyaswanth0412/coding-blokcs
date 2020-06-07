#include<iostream>
using namespace std;
int main{
	cout<<"Enter a number"<<endl;
	cin>>n;
	bool isPrime=true;
	int i;
	for(i=2;i<=n/2;i++){
		if(n%i==0){
			isPrime=false;
			break;
			
		}
	}
	if(isPrime)
		cout<<n<<"is a prime number";
	else
		cout<<n<<"Is not a prime nummber";



return 0;
}
