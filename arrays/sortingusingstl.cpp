#include<iostream>
#include<algorithm>
using namespace std;
void accept(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
}
int main()
{
	int a[100];int n;
	cin>>n;
	accept(a,n);
	//sorting using sort function
	sort(a,a+n);
	for(int i=0;i<n;i++)
	{
		cout<<a[i];
	}
	return 0;
}
