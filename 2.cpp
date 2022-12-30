#include<iostream>
using namespace std;

class Complex
{
	int real;
	int img;
public:

	Complex()
	{
		real=img=0;
	}

	Complex(int a,int y)
	{
		real=a;
		img=y;
	}

	Complex(int a)
	{
		real=a;
		img=a;
	}

	void show()
	{
		cout<<real<<" "<<img<<endl;
	}

	operator int()
	{
		return real;
	}


};
int main()
{
Complex c1(3,4);
int x;
x=c1;
cout<<x<<endl;
return 0;
}