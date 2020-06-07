#include<iostream>
using namespace std;
int main(){
	int cliff_end=10;
	int start=0;
	while(start<10){
		start=start+1;
		cout<<"Taking step x: "<<start<<endl;
	}
	cout<<"Final value of x"<<start<<endl;
	
	if(start==cliff_end)
		cout<<"We are at the cliff end"<<endl;
	else if(start>cliff_end)
		cout<<"Falling from the cliff"<<endl;	
	return 0;
}
