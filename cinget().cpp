n#include<iostream>
using namespace std;
int main(){
	char ch=cin.get();//this method reads any special character including white spaces//
	while(ch!='.'){
		cout<<ch;
		//update mychar in memory (read the next character) reads the next character//
		ch=cin.get();
		
	}
	return 0;
	
}
