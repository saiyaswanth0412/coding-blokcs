#include<iostream>
#include<climits>
using namespace std;
int main(){
	int x;
	cout<<INT_MAX<<endl;
	cout<<INT_MIN<<endl;
	x=INT_MAX;
	cout<<x<<endl;
	x=x+1;//wrap aorund feaature if u exceeded the largest value then +1 it go again to mininmum value//
	cout<<x<<endl;
	return 0;
}
