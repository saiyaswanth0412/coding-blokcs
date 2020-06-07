#include<iostream>
using namespace std;
int main() {
	int min=0,max=0,step=0,celc;
	cin>>min;
	cin>>max;
	cin>>step;
	for(int i=min;i<=max;i=i+step)
	{
       celc=(5.0/9.0)*(i-32);
	   cout<<i<<" "<<celc;
	   cout<<endl;
	}
	return 0;
}
