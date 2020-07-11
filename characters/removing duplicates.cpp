#include<iostream>
#include<cstring.h>
using namespace std;
void cons(char c[])
{	int l=strelen(c);
	int previous=0;
	if(l==0 or l==1)
		return;
	for(int current=1;current<l;current++)
	{
		if(a[current]!=a[previous])
		{
			prev++;
			a[prev]=a[current];
		}
	}
	a[prev+1]='/0';
}
int main()
{
	char a[1000];
	cin.getline(a,1000);
	
	return 0;	
}
