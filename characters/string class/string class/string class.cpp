#include<iostream>
#include<string>
using namespace std;
int main()
{
	string s0;
	string s1("hello");
	string s3(s1);
	char ch[] = { 'a','b','c','\0' };
	string s5(ch);
	cout << s0 << endl;
	cout << s1 << endl;
	//cout << s2 << endl;
	cout << s3 << endl;
	cout << s5 << endl;
	if (s0.empty())
		cout << "empty string" << endl;
	//append
	s0.append("I love c++");
	cout << s0 << endl;
	s0 += "and phython";
	cout << s0 << endl;
	//remove
	cout << s0.length() << endl;
	s0.clear();
	cout << s0.length() << endl;
	//compare two strings
	s0 = "Apple";
	s1 = "Mango";
	cout << s0.compare(s1) << endl;
	if (s1 > s0)
		cout << "mango is lexigraphyacally greater than apple"<<endl;
	else
	{
		cout << "apple is lexigraphically greater than mango" << endl;
	}
	//find substring 
	string s7 = "hello this is my first program in c++";
	int index = s7.find("my");
	cout << index << endl;
	//removing a word
	string word = "my";
	int length = word.length();
	s7.erase(index, length+1);//for remving spaces(+1)
	cout << s7 << endl;


	return 0;

}