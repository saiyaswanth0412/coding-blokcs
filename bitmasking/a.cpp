#include<iostream>
using namespace std;
int main()
{
	int length=1189,breadth=841;
	int i=1;
	while(i<=8)
	{
		int t=length;
		length =breadth;
		breadth=t/2;
		printf("A %d*%d",length,breadth);
		i++;
	}
		return 0;
}

