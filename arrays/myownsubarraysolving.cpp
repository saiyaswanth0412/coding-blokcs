#include<iostream>
#include<algorithm>
using namespace std;
void  accept(int a[],int n)//accept function
{
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
}


int main()
{	int a[1000],n;
	cin>>n;
	accept(a,n);//accepted an array //
	sort(a,a+n);//sorted it for example its 3 2 -1 so now its -1 2 3 //
	int sum=0;
	for(int i=n-1;i>=0;i--)//added elements from last as last has a highest value as its sorted //
	{
		if(a[i]>=0)
			sum=sum+a[i];
		else
			break;
		
	}
	cout<<sum<<endl;
	
	return 0;
}
