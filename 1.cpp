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


};

int main()
{
	Complex c1;
	int x=5;
	c1=x;
	c1.show();
	return 0;
}