#include<iostream>
using namespace std;

class Time{
	int hr;
	int m;
public:

	Time()
	{}

	Time(int a,int b){
		hr=a;
		m=b;
	}
    

    void display(){
    	cout<<hr<<" "<<m<<endl;
    }

    int getm(){
    	return m;
    }

};

class Minute{
	int m;
public:
	Minute(){}
	Minute(int a){
     m=a;
	}

	Minute(Time &t){
		m=t.getm();
	}

	void display(){
		cout<<m<<endl;
	}
};

int main(){

   Time t1(2,30);
   t1.display();
   Minute m1(4);
   m1.display();
   m1=t1;
   t1.display();
   m1.display();
   return 0;
}


