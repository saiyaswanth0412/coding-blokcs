#include<iostream>
using namespace std;
bool one(string s,string ones)
{
	
	for(int i=0;i<=s.length()-ones.length();i++)
	{
		
		for(int j=0;j<ones.length();j++)
		{
			if(s[i+j]!=ones[j])
			{

				break;
			}
			if(j==ones.l
			{

				return true;	
			}
		}

	}
	return false;
}
int main(int argc, char const *argv[])
{
	string s;
	cin>>s;
	if(one(s,"0000000")||one(s,"1111111"))
	{
		cout<<"YES";
	}
	else
		cout<<"NO";
	
	return 0;
}
