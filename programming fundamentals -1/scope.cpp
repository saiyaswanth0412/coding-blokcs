//scope of the variable//
#include<iostream>
//local scope//
//global scope//
using namespace std;
int x=1000;
int main(){
	
	int x=10;//but if we make this statement as a comment then the value of x will be printed as 	100//
	for( int x=0;x<=5;x++){
		cout<<x<<endl;
	}
	cout<<x<<endl;//anything inside the brackets are known as local scope//
	//cout<"Global x"<<::x<<endl;//scope resolution operator it gives the value of the global variable// //global variable//
	
}
