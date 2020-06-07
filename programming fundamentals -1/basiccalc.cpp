#include<iostream>
using namespace std;
int main() {
	char ch;
	int ans=0;
	int a,b;

    
	do{
		cin>>ch>>a>>b;
		if(ch=='X'or'x'){
		break;
	}
	else
	{
	
	
		switch(ch){
			case '*':
				ans=a*b;
				cout<<ans<<endl;
				break;
			case '+':
				ans=a+b;
				cout<<ans<<endl;
				break;
			case '-':
				ans=a-b;
				cout<<ans<<endl;
				break;
			case '/':
				ans=a/b;
				cout<<ans<<endl;
				break;
			case '%':
				ans=a%b;
				cout<<ans<<endl;
				break;
			default:cout<<"Invalid operation.Try again.";
				break;
		}
    }
       
     
	}while(ch!='X'||ch!='x');
 
	return 0;
}
