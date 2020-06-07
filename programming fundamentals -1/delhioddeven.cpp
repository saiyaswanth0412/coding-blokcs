#include<iostream>
using namespace std;
int main() {
	long long int n;long long int sume=0,sumo=0;
	int num;
	cin>>num;
	for(int i=1;i<=num;i++){
	cin>>n;
	while(n!=0){
		if((n%10)%2==0)
			sume=sume+(n%10);
		else
			sumo=sumo+(n%10);
		n=n/10;
	}
	if(sume%4==0||sumo%3==0)
		cout<<"Yes"<<endl;
	else
		cout<<"No"<<endl;
	}	
	return 0;
}
