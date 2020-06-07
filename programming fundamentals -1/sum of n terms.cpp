#include<iostream>
using namespace std;
int main(){
	int i,sum=0;
	int n;
	cin>>n;//input the number of n//
	
	while(i<=n)
	{
		sum=sum+i;//sum of the numbers//
		i=i+1;
	}
	cout<<sum<<endl;//output command//
	return 0;
}
