#include<iostream>
using namespace std;
int main(){
	int n,c=0;
	cin>>n;
	for(int i=0;i<n;i++){
		if((i*i)>n){
			c=i-1;
			break;
		}
		if((i*i)==n){
		
			c=i;
			break;
	}
	}
	cout<<c<<endl;
	return 0;
}
