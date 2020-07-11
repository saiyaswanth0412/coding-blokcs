#include<iostream>
#include<algorithm>
using namespace std;
int main()
{	int n;
	cin>>n;
	int *arr;
	arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	//searching a element
	int key;
	cin>>key;
	bool present=binary_search(arr,arr+n,key);
	if(present==1)
		cout<<"Present";
	else
		cout<<"Absent"<<endl;
	return 0;
	
}
