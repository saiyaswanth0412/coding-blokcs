#include<iostream>
using namespace std;
class Car{
private:
   int 	price;
public:
	int model_no;
	char name[20];

void start(){
	cout<<"GRrrrrr the car is starting "<<endl;
}
void setPrice(int p)
{
	if(p>0)
		price=p;
	else
		{
			price=1000;
			}	
}
int getprice()
{
	return price;
}
};
int main()
{
	Car c;
	c.name[0]='B';
	c.name[1]='M';
	c.name[2]='W';
	c.name[3]='\0';
	c.setPrice(-1000);
	cout<<c.name<<endl;
	cout<<c.getprice()<<endl;
	Car d;
	d.name[0]='A';
	d.name[1]='U';
	d.name[2]='D';
	d.name[3]='I';
	d.name[4]='\0';
	d.setPrice(1000000);
	cout<<d.name<<endl;
	cout<<d.getprice()<<endl;
	return 0;
}
