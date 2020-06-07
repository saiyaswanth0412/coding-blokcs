#include<iostream>
using namespace std;
int main(){
	int n;
	cout<<"Enter the number to be checked"<<endl;
	cin>>n;
	int i;
	for(i=2;i<=n-1;i++){
		if(n%i==0)
			cout<<"Not a prime number"<<endl;
			break;
		
	}
	if(i==n){
		cout<<"Yes its a prime number"<<endl;
	}
return 0;
}
