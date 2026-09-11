#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"Hello I am default/non parametrized constructor";
		}
};
int main()
{
	A obj;
	return 0;
}