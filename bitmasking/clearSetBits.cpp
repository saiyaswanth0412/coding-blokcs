#include<iostream>
using namespace std;
int clearLastBit(int n,int i)
{
	int mask=(-1<<i);
	return n&mask;
}
int main()
{

	int i,n;
		cin>>n;
	cin>>i;
	cout<<clearLastBit(n,i);
	return 0;
}
