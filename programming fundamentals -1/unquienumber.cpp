#include<iostream>
using namespace std;
int main(){
	int n,ans=0;
	cin>>n;
	int no;
	for(int i=0;i<n;i++){
		cin>>no;
		ans=ans^no;
	}
	cout<<ans<<endl;
	return 0;
}
