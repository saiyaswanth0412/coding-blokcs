#include<iostream>
using namespace std;
class car
{
public:
	int price;
	int model_no;
	char name[20];
};
int main()
{
	car c;
	cout<<sizeof(c)<<endl;
	cout<<sizeof(car)<<endl;	
}
