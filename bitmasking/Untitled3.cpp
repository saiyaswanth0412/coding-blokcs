#include<iostream>
using namespace std;
bool isOdd(int n)
{
	return(n&1);
}
int main()
{
	int n;
	cin>>n;
	if(isOdd(n))
		cout<<"Odd number"<<endl;
	else 
		cout<<"Even number "<<endl;
	
}
