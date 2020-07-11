#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int *arr,n;
	cin>>n;
	arr=new int[n];
	//search the key
	
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	int key;
	cin>>key;
	auto *it=find(arr,arr+n,key);
	int index=*it-*arr;
	if(index==n)
	{
		cout<<key<<"not present";
	}
	else
		cout<<"present"<<index;
	delete []arr;
	return 0;
}
