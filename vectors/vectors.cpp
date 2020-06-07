#include<iostream>
#include<vector>
using namespace std;
int main()
{
	vector<int>a;
	vector<int>b(5,10);
	vector<int>c(b.begin(),b.end());
	for(int i=0;i<c.size();i++)
	{
		cout<<c[i]<<" ,";
	}
	cout<<endl;
}

