/*Add two numbers using default constuctor */
#include<iostream>
using namespace std;
class Add 
{
	int a,b,c;
	public:
	Add()
	{
		cout<<"Enter Any Two Numbers"<<endl;
		cin>>a>>b;
	}
	void sum()
	{
		c=a+b;
	}
	void display()
	{
		cout<<"sum ="<<c;
	}
};
int main()
{
		Add obj; 
		obj.sum();
		obj.display();
		return 0;
}
		