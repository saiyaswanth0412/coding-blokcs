#include<iostream>
#include<climits>
using namespace std;
int main(){
	int max=INT_MIN,min=INT_MAX,n;
	cin>>n;
	int a,i;
	for(i=0;i<n;i++){
		cin>>a;
		if(max<a)
			max=a;
		if(min>a)
			min=a;
	}
	cout<<min<<endl;
	cout<<max;
     return 0;
}
