#include<iostream>
using namespace std;
class car
{
	public:
	char name[20];
	int price;
	int model;
	void start()
	{
		cout<<"Starting of the car grgrgr...";
	}
};
int main()
{
	car c;
	c.price=1000000;
	c.model=8500;
	c.name[0]='B';
	c.name[1]='M';
	c.name[2]='w';
	c.name[3]='\0';
	c.start();
	return 0;
}
