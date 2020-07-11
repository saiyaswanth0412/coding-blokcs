#include<iostream>
#include<cstring>
using namespace std;
class car{
	private:
	int price;
	public:
		int model_no;
		char name[20];
		void start(){
			cout<<"Grrrr the car is starting "<<name<<endl;
		}
		car(){
			cout<<"this is a brand new car"<<endl;
		}
		//constructor with parameters 
		car(int p,int mn,char *n){
			price=p;
			model_no=mn;
			strcpy(name,n);
		}
		void setPrice(int p)
		{
			if(p>1000)
			{
				price=p;
			}
			else 	
				price=1000;
		}
		int getPrice()
		{
			return price;
		}
	void print(){
		cout<<name<<endl;
		cout<<model_no<<endl;
		cout<<price<<endl;
	}
};
int main(){
	car c;
	c.name[0]='B';
	c.name[1]='M';
	c.name[2]='W';
	c.name[3]='\0';
	c.model_no=123;
	c.setPrice(1000);
	c.start();
	cout<<c.name<<endl;
	cout<<c.getPrice()<<endl;
	car e(100,2001,"Ferrai");
	e.print();
	car f(e);//copy constructor
	f.print();
	e.print();
	return 0;
}
