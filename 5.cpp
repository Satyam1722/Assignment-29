#include<iostream>
using namespace std;

class Invent1{
	int a,b;
public:

	Invent1(){

	}

	Invent1(int x,int y){
		a=x;b=y;
	}

   void setData(int x,int y){
   	a=x;b=y;
   }

   operator float()
   {
   	return a+b;
   }

   int geta(){
   	return a;
   }

      int getb(){
   	return b;
   }


};

class Invent2
{
	int a,b;
public:

	Invent2(){

	}

	Invent2(int x,int y){
		a=x;b=y;
	}

	Invent2(Invent1 &i){
		a=i.geta();
		b=i.getb();
	}

   void setData(int x,int y){
   	a=x;b=y;
   }

   void show(){
   	cout<<a<<" "<<b<<endl;
   }


};

int main(){
	Invent1 s1(4,5);
	Invent2 d1;
	float tv;
	tv=(float)s1;
	cout<<tv<<endl;
	d1=s1;
	d1.show();
    return 0;
}