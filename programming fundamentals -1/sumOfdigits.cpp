#include<iostream>
using namespace std;
int main(){
	int sum=0,n;//for sum it is intialization and for n it is decaration//
	cin>>n;
	while(n>0){
		int last_diigt=n%10;
		sum=sum+last_diigt;
		n=n/10;//update statement//
	}
	cout<<sum<<endl;//printing sum//
	return 0;
}
