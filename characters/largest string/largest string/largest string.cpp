#include<iostream>
using namespace std;
#include<string.h>
#include<cstring>
int main()
{
	char largest[1000];
	int length, largest_length = 0;
	int n;
	char a[1000];
	cin >> n;
	cin.get();
	while(n<=0)
	{
		cin.getline(largest, 1000);
		length= strlen(largest);
		if (length > largest_length)
		{
			largest_length = length;
			strcpy(a, largest);
		}
		n--;
	}
	cout << a << endl;
}