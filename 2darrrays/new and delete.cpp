#include<iostream>
using namespace std;
int main()
{
	int a[100];
	sizeof(a);//gives us the size of a//
	int n;
	cin>>n;
	int *j=new int[n];
	cout<<sizeof(n)<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>j[i];
		cout<<j[i];
	}
	return 0;
}
