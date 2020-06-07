#include<iostream>
using namespace std;
int main(){
	int spaces=0;
	int digits=0;
	int alaphabets=0;
	int other=0;
	char ch;
	cin>>ch;
	while(ch!='$'){
	
	if(ch>='0'&& ch<='9')
		digits++;
	else if((ch>='A'&& ch<='Z')|| (ch>='a'&& ch<='z'))
		alaphabets++;
	else if(ch==' '|| ch=='\n'|| ch=='\t')
		spaces++;
	else
		other++;

	cin>>ch;
    }
    cout<<"digits"<<digits<<endl;
	cout<<"alaphabets"<<alaphabets<<endl;
	cout<<"spaces"<<spaces<<endl;
	cout<<"other"<<other<<endl;

	return 0;
}
