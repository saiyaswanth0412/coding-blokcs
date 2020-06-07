#include<iostream>
using namespace std;
int main(){
	//break is used to come out of the loop //
	int n;

	while(true)
	{    	cin>>n;
		if(n%7==0)
		  break;
		cout<<"No : "<<n<<" is not divisble by 7";
	}
	cout<<"We are out of the loop and the fucking number is divisble by 7";
	return 0;

}
