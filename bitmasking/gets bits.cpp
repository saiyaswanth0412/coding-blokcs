#include<iostream>
using namespace std;
int getBits(int n,int i)
{
	int mask=(1<<i);
	int bit=(mask&n)>0?1:0;
	return bit;
}
int main()
{	int n,i;
	cin>>n;
	cin>>i;
	cout<<getBits(n,i)<<endl;
	return 0;
}
