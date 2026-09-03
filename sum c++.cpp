#include<iostream>
using namespace std;
class sum
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
		void printsum()
		{
			c=a+b;
			cout<<"sum="<<c;
		}
};
int main()
{
	sum s;
	s.setvalue();
	s.printsum();
	return 0;
}