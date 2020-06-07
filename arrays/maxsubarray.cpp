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
	int  a[1000];int n;
	cin>>n;
	accept(a,n);
	int left=-1,right=-1,currentsub	;int maxsum=-9999;
	int i,j,k;
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{	int currentsub=0;
			for(k=i;k<=j;k++)
			{
				currentsub+=a[k];
			}
		
		
			if(currentsub>maxsum)
			{
				if(currentsum%2==1)
					pritf
					
			
			}
			
		}
	
	}
		cout<<maxsum<<endl;
	for(k=left;k<=right;k++)
	{
		cout<<a[k]<<" "<<endl;
	}
	return 0;
	
}
