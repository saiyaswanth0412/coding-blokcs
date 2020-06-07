#include<iostream>
using namespace std;
int main()
{   int n;
	scanf("%d",&n);
	int N;
	int p,ans;
	while(n>0)
	{
		cin>>N;
		while(N<0)
		{
			int r=N%10;
			ans=ans+(r*p);
			p=p*2;
			N=N/10;
		}
	cout<<ans<<endl;
	n=n-1;
	}
	return 0;
}
