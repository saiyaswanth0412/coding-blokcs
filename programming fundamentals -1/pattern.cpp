#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			if(i%2==0)
			{
				if(j%2!=0)
					cout<<"1";
				else
					cout<<"0";
			}
			else
				{
				     if(j%2==0)
					cout<<"1";
				    else
					cout<<"0";
				}
		}
	cout<<endl;
	}
return 0;
}
