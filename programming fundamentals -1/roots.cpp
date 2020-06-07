#include<iostream>
#include<cmath>
using namespace std;
int main() 
	{
	float discrimant=0,a,b,c;
	float root1,root2;
	cin>>a>>b>>c;
	discrimant=sqrt((b*b)-(4*a*c));
	root1=(-b+discrimant)/(2*a);
	root2=(-b-discrimant)/(2*a);
    if(discrimant==0)
    	cout<<" Real and Equal"<<endl<<root1<<" "<<root2;
    else if(discrimant>0)
    	cout<<"Real and Distinct "<<endl<<root1<<" "<<root2;
    else
    	cout<<"imaginary"<<endl;
	return 0;
}
