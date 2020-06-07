#include<iostream>
#include<cmath>
using namespace std;
int main()
{	int a[100],n;
	cout<<"Enter the number of elements to be entered"<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int key;
	cout<<"Enter the key "<<endl;
	cin>>key;
	int i;
	for(i=0;i<=n-1;i++)
	{
		if(a[i]==key)
		{
		
			cout<<"Key found at "<<i<<"index"<<endl;
			break;
		}
	}
	if(i==n)
		cout<<"Element not found"<<endl;
	return 0;
}
