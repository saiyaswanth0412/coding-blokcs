#include<iostream>
using namespace std;
int main(){
	int n;
	while(true){
		cin>>n;
		if((n%7)==0)
			continue;/*continue makes us to go to the next iteration if this condition satisifes
			by using continue statement the program will again go to number 7*/
		cout<<"You never gonna this shitty statement if the number is divisble by 7 ";
		
	}
	return 0;
}

