#include<iostream>
using namespace std;
void sayHello()
{
	cout<<"Hello world"<<endl;
}
int factorial(int n)
{
	int ans=1;
	for(int i=2;i<=n;i++)
	{
		ans=ans*i;
	}
	return ans;
}
int main()
{   cout<<"Before function"<<endl;
	sayHello();						//so the control flow is line number 8 after which line 9 is executed (the function is executed after which line 10 is exceuted//
	cout<<"After function"<<endl;
	
	/*part 2*/
	cout<<"Enter any number"<<endl;
	int n;
	cin>>n;
	cout<<factorial(n)<<endl;
	return 0;
}
