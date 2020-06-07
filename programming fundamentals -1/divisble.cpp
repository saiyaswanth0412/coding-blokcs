#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n%2==0){
		cout<<"divisible by 2"<<endl;
	}
	else if(n%3==0){
		cout<<"disivible by 3"<<endl;
	}
	else
		cout<<"not divisible by 2 or 3 ";
	return 0;
}
