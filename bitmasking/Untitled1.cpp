#include<iostream>
using namespace std;
void update(int &n,int i,int v)
{
	int mask=~(1<<i);
	int cleared_n=n&mask;
	n=cleared_n|(v<<i);
}
int main()
{
	int n,i,v;
	cin>>n>>i>>v;
	//clearBit(n,i);
	cout<<n<<endl;
	//update the fourth bit in n
	 update(n,i,v);
	 cout<<n<<endl;
	 
	 return 0;
}
