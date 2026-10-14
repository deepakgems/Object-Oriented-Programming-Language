#include<iostream>
using namespace std;
class Example
{
	public:
		int x;
		void display (int x)
		{
		this->x=x;
		cout<<"The value of x="<<x;
		}
};
int main()
{
	Example obj,obj1;
	obj.display(10);
	obj1.display(20);
	return 0;
}