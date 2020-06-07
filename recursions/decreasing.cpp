#include<iostream>
using namespace std;
void sqe(int n)
{
	if(n==0)
		return ;
	cout<<n<<" ";
	sqe(n-1);
}
int main()
{
	int n;
	cin>>n;
	sqe(n);
	return 0;
}
