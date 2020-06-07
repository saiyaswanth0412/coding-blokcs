#include<iostream>
using namespace std;
int main(){
	int a,b,c;
	a=10;
	b=20;
	c=30;
	//logical operator
    if(c>b&&c>a)
		cout<<"C"<<endl;
	//ternary operator
	c%2==0?cout<<1:cout<<0;
	//bitwise opeartors
	int x=5;
	int y=7;
	cout<<"AND"<<(x&y)<<endl;
	cout<<"OR"<<(x|y)<<endl;
	cout<<"XOR"<<(x^y)<<endl;
	//shift operator 
	x=x<<2;
	cout<<x<<endl;
	cout<<(y>>1)<<endl;
	//address of operator
	cout<<(&x)<<endl;
	//post increment
	a=10;
	int z=a++;
	cout<<"The value of z"<<a<<"The value of a "<<z<<endl;
    //compund assignment operator 
    a=10;
    a*=3;
    cout<<"A after multiply"<<a<<endl;
    a%=5;
    cout<<"A after divison"<<a<<endl;
    b=5;
    b<<=1;
    cout<<"B after the left shift"<<b<<endl;
	return 0;
}
