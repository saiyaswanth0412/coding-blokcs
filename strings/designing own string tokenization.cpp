#include<iostream>
#include<cstring>
using namespace std;
char* mystrok(char *str,char delim)
{
	static char *input=NULL;
	if(str!=NULL)
	{
		input=str;
	}
	char *output=new char[strlen(input)+1];
	for(int i=0;input='\0';i++)
	{
		if(output[i]!=delim)
		{
			output[i]=input[i];
		}
		else
		{
			output[i]='\0';
			input+=1;
			return output;
		}
	}
	
	
}
int main()
{
	char c[100]="Today is a rainy day";
	char *ptr=mystrok(c,' ');
	cout<<ptr<<endl;
	while(ptr!=NULL)
	{
		ptr=mystrok(NULL,' ');
		cout<<ptr<<endl;
	}
	return 0;
}

