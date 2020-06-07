#include<iostream>
using namespace std;
int main(){
	int x=0,y=0;
	char ch;
	ch=cin.get();
	while(ch!='\n'){
		
	
	if(ch=='N' or ch=='n')
		y++;
	if(ch=='S'or ch=='s')
		y--;
	if(ch=='W' or ch=='w')
		x--;
	if(ch=='E' or ch=='e')
		x++;
	ch=cin.get();
   }
   cout<<"Final displacement is"<<x<<"and"<<y<<endl;
   return 0;
}
