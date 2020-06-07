#include<iostream>//input output stream
using namespace std;//standard c++ name
int main(){
	int p,r,t;
	//simple interest
	/*this is a multiple line comment code*/
	float si=0.0;
	//int r=4;//assignment statement
	//int p=100;//assignment statement
	//int t=3;//assignment statement
	//every statement should be completed with a semiclon
	cin>>p>>t>>r;
	si=p*t*r/100.0;
	cout<<si<<endln;
	return 0;
	
}
