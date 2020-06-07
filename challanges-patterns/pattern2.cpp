/*1
11
202
3003
40004
*/
#include<iostream>
using namespace std;
int main()
{ 	int n;
	cin>>n;
	if(n==1)
		cout<<"1";
	else
		cout<<"1";
		cout<<endl;
		for(int i=2;i<=n;i++)
		{
			for(int j=1;j<=i;j++)
			{
				if(j==1||j==i)
					cout<<i-1;
				else 	
					cout<<"0";
					
			}
			cout<<endl;
		}
	return 0;
}
