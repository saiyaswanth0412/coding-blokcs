#include<iostream>
using namespace std;
void readline(char a[],int maxlength)
{	int i;
	char ch=cin.get();
	while(ch!='\n')
	{
		a[i]=ch;
		i++;
		if(i==(maxlength-1)){
		break;
		}
		ch=cin.get();
	}
	a[i]='\0';
	return ;
}
int main()
{
	char ch[1000];int n;
	readline(ch,1000);
	cout<<ch<<endl;
	return 0;
	}
