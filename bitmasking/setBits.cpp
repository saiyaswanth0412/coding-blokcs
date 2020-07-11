#include<iostream>
using namespace std;
int setBit(int n,int i)
{
	int mask=(1<<i);
	int	ans=n|mask;
	return ans;
}
int getBits(int n,int i)
{
	int mask=(1<<i);
	int bit=(mask&n)>0?1:0;
	return bit;
}
int main()
{	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n,i;
	cin>>n>>i;
	cout<<getBits(n,i)<<endl;
	cout<<setBit(n,i)<<endl;
	
	return 0;
}
