#include<iostream>688
using namespace std;
class greatest
{
	public:
	int num1,num2,num3;
	void setvalue()
	{
		cout<<"Enter the number:";
		cin>>num1;
		cout<<"Enter the number:";
		cin>>num2;
		cout<<"Enter the number:";
		cin>>num3;
	}
	void printgreatest()
	{
		if(num1>num2&&num1>num3)
		{
		cout<<"Num1 is greater:" "  "<<num1<<endl;
   		}
		else if(num2>num1&&num2>num3)
		{
		cout<<"Num2 is greater:" "  "<<num2<<endl;
		}
		else
		{
		cout<<"Num3 is greater:" "  "<<num3<<endl;
		}
	}
};
	int main()
	{
		greatest g;
		g.setvalue();
		g.printgreatest();
		return 0;
	}