#include<iostream>
#include<cmath>//max and min function //
using namespace std;
int main()
{
	int n,a[100];
	int largest=INT_MIN,smallest=INT_MAX;
	cin>>n;
	for(int i=0;i<n;i++)
		cin>>a[i];
	for(int i=0;i<n;i++)
	{
		largest=max(largest,a[i]);
		smallest=min(smallest,a[i]);
	}
	cout<<largest<<endl<<smallest;
	return 0;
}
