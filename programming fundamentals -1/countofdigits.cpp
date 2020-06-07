#include<iostream>
using namespace std;
int main() {
	long long int n,key;
	cin>>n;
	cin>>key;
	int c=0;
	while(n!=0){
		if((n%10)==key)
		c++;
		n=n/10;
	}
	cout<<c<<endl;
	
	return 0;
}

