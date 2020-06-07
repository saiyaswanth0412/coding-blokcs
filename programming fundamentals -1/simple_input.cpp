#include<iostream>
using namespace std;
int main() {
	int n;
	int a;
	int sum=0;
	for(int i=0;i<5;i++){
		cin>>a;
		if(i==0&&a<0)
		{
			break;
		}
		if(sum<0)
		{
			break;
		}
		else{
			sum=sum+a;
			cout<<a<<" ";
		}
	}
	return 1;
}
