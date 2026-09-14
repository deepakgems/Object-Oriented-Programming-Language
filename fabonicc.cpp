#include<iostream>
using namespace std;
class fabonicc
{
	public:
	int i,num1,num2,num3,term;
	void setvalue()
	{
		cout<<"Enter the number:";885
		cin>>term;
		num1=0;
		num2=1;
		cout<<num1<<"  "<<num2<<"  3/" ;
	}
	void printfacbonicc()
	{
		for(i=1; i<=term; i++)
	{
		num3=num1+num2;
		cout<<num3<<"  ";
		num1=num2;
		num2=num3;
	}
	}
};
int main()
{
	fabonicc f;
	f.setvalue();
	f.printfacbonicc();
	return 0;
}