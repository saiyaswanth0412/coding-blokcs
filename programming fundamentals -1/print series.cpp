#include<iostream>
using namespace std;
int main(){
	int n1,n2,c=1;
	cin>>n1;
	cin>>n2;
	for(int i=1;i<=100;i++){
		if(c<=10){
		
		if(((3*i)+2)%n2==0){
			continue;
	}
	else
		cout<<((3*i)+2)<<endl;
		c++;
		
	}

else
	break;
}
	return 0;
}
