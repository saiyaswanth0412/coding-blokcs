#include<iostream>
#include<cmath>
using namespace std;
int binary(int a[],int n,int key)
{
	int start=0;
	int end=n-1;
	int mid;
	while(start<=end)
	{   mid=(start+end)/2;
		if(a[mid]==key)
			return mid;
		else if(a[mid]>key)
			end=mid-1;
		else
			start=mid+1;
	}
	return -1;
}
int main()
{
	int n,a[1000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int key;
	cout<<"Enter the key to be searched"<<key<<endl;
	cin>>key;
	
	if(binary(a,n,key)==-1)
		cout<<"No the element is not found"<<endl;
	else 
		cout<<"The place at which the element is found is"<<binary(a,n,key)<<endl;
}

