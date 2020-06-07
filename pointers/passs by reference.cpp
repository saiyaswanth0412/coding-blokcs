#include<iostream>
using namespace std;
void incremnet(int *a)
{
	*a=*a+1;
	cout<<"In the function "<<endl;
	cout<<*a<<endl;
}
int main()
{
	int a=10;
	incremnet(&a);
	cout<<"in the main method "<<endl;
	cout<<a<<endl;
	return 0;
}
