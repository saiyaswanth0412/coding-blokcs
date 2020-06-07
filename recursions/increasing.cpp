#include<iostream>
using namespace std;
void sqe(int n)
{
	if(n==0)
		return ;
	else
		sqe(n-1);
		cout<<n<<" ";
	
	
	}
int main()
{
	int n;
	cin>>n;
	sqe(n);
	return 0;
}
