#include<iostream>
#include<cstring.h>
using namespace std;
class car
{
	int price;
	char ch[20];
	int series;
	car()
	{
		cout << "Making a car" << endl;

	}
	car(int p, int mn, char* n)
	{
		price = p;
		series = mn;
		strcpy(ch, n);
	}
	void start()
	{
		cout << "Grrr starting of the car" << endl;
	}
	void setPrice(int p)
	{
		if (p > 1000)
			price = p;
		else
			price = 1000;
	}
	int getPrice()
	{
		return price;
	}
	void print()
	{

	}

};
int main()
{
	car
}