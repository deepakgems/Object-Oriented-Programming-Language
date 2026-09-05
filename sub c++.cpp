#include<iostream>
using namespace std;
class sub
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
		void printsub()
		{
			c=a-b;
			cout<<"sub="<<c;
		}
};
int main()
{
	sub s;
	s.setvalue();
	s.printsub();
	return 0;
}