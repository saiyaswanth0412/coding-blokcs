#include<iostream>
using namespace std;
int main() {
	int n,ans=0;
	cin>>n;
	int i=1;
	while(n!=0){
		ans=ans+(n%8)*i;
		n=(n)/8;
		i*=10;
	}
	cout<<ans<<endl;
	return 0;
}
