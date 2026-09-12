#include<iostream>
using namespace std;
class divi
{
	public:
		int a,b,c;
		void setvalue()
		{
			cout<<"Enter the number:";
			cin>>a;
			cout<<"Enter the number:";
			cin>>b;
		}
		void printdivi()
		{
			c=a/b;
			cout<<"divi="<<c;
		}
};
int main()
{
	divi d;
	d.setvalue();
	d.printdivi();
	return 0;
}