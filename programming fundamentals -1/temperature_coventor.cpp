#include<iostream>
#include<climits>
using namespace std;
int main(){
	int f=0;
	float c;
	while(f<300){
		int c=9/5.0*(f-32);
		f=f+20;
		cout<<f<<" "<<c<<endl;
	}

return 0;	
}
