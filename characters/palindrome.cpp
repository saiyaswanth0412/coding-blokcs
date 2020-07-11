#include<iostream>
#include<cstring>
using namespace std;
bool isPalindrome(char c[])
{
	int j=strlen(c)-1;
	int i=0;
	while(i<j)
	{
		if(c[i]==c[j])
		{
			i++;
			j--;
		}
		else
			return false;
	}
	return true;
}
int main()
{
	char ch[1000];
	cin.getline(ch,1000);
	if(isPalindrome(ch))
		printf("It is a palindrome name");
	else
		printf("It its not a palindrome name");
	return 0;
}
