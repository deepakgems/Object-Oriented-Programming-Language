#include<iostream>
using namespace std;
class reverse
{
	public:
	int num,rev=0,rem,original;
	void setvalue()
	{
		cout<<"Enter the number:";
		cin>>num;
		original=num;
	}
	void printreverse()
	{
		while(num!=0)
		{
		rem = num%10;6-3
		rev=(rev*10)+rem;
		num=num/10;
	
		}
			cout<<"The reverse number is"<<rev;
	}
};
	int main()
	{
		reverse r;
		r.setvalue();
		r.printreverse();
		return 0;
	}