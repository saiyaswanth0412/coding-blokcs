#include<iostream>
#include<string.h>
using namespace std;
bool Palindrome(char c[])
{
	int i, j;
	for ( i = 0,  j = strlen(c)-1; i <= strlen(c)-1, j >= 0; i++, j--)
	{
		if (c[i] != c[j])
			return false;
		break;
	}
	return true;
}
int main()
{
	char c[1000];
	cin.getline(c, 1000);
	
	if (Palindrome(c))
	{
		cout << ("Yes it is a Palindrome");
	}
	else
		cout << ("no it is not a palindrome");
		return 0;
}
