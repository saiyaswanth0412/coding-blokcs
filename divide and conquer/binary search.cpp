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
int binarysearch(int a[],int start,int end,int key)
{	int mid;
	while(start<=end)
	{
		mid=start+(end-1)/2;
		if(a[mid]==key)
			return mid;
		else if(a[mid]>key)
			end=mid-1;
		else	
			start=mid+1;
	}
	return -1;
	
}
int main(){
	int n;
	cin>>n;
	int a[n];
	accept(a,n);
	int key;
	cin>>key;
	sort(a,a+n);
	int ans=binarysearch(a,0,n,key);
	ans==-1?cout<<"Element not found":cout<<"Element at"<<ans<<endl;
	return 0;
}
