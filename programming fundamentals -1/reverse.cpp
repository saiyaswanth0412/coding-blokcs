#include<iostream>
using namespace std;
int main() {
	long long int n;
	cin>>n;
	long long rev=0;
	while(n!=0)
	{
		rev=rev*10+(n%10);
		n=n/10;
	}
	cout<<rev<<endl;



	return 0;
}s
