#include<iostream>
using namespace std;
class factorial
{
	public:
	int i,f,num;
	void setvalue()
	{
		cout<<"Enter the number:";
		cin>>num;
		f=1;
	}
	void printfactorial()
	{
			for(i=1; i<=num; i++)
	{
		f=f*i;
	}
	cout<<"The Factorial is:" "  "<<f;
	}
};
int main()
{
	factorial f;
	f.setvalue();
	f.printfactorial();
	return 0;
}