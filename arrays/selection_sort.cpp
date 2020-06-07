#include<iostream>
#include<cmath>
using namespace std;
int main()
{	int n,a[1000];
	cin>>n;
	//aceepting an array//
	for(int i=0;i<n;++i)
		cin>>a[i];
	//selection sort algothrim//
	for(int i=0;i<=n-2;i++)
	{//find the smallest element in the unsorted part//
		int min_index=i;
		for(int j=i;j<=n-1;j++)
		{
			if(a[j]<a[min_index])
				min_index=j;
		
			
		}
		swap(a[i],a[min_index]);
		
	}
	//printing the array//
	for(int i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}


