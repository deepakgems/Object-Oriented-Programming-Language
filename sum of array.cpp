#include<iostream>688
using namespace std;
class array
{
	public:
	int arr[20],size,i,sum=0;
	void setvalue()
	{
	cout<<"Enter the array element of size:";
	cin>>size;
	}
	void printarray()
	{
		for(i=0;i<size;i++)
		{
			cin>>arr[i];
			sum=sum+arr[i];
		}
		cout<<"The sum of element are: "<<sum;
			
	}
};
	int main()
	{
		array a;
		a.setvalue();
		a.printarray();
		return 0;
	}