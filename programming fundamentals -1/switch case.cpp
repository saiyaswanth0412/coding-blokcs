#include<iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;
	switch(ch)
	{
		case 'A':
		case 'a':
			cout<<"apple "<<endl;
			break;
		case 'B':
	    case 'b':
			cout<<"Banana"<<endl;
			break;
		case 'C':
		case 'c':
			cout<<"Cake"<<endl;
			break;
		case 'D':
	    case 'd':
			cout<<"dark chocolate"<<endl;
			break;
		default:cout<<"Item not available !!";
	}
	return 0;
}
