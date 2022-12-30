#include<iostream>
using namespace std;

class Rupee{
  int x;
public:
	Rupee(int a){
		x=a;
	}
	Rupee(){

	}


	void display(){
		cout<<x<<endl;
	}

	int getData(){
		return x;
	}
};

class Dollar{
  int x;
public:
	Dollar(int a){
		x=a;
	}
	Dollar(){

	}
	Dollar(Rupee &r){
		x=r.getData();
	}

	void display(){
		cout<<x<<endl;
	}

	operator Rupee(){
	return x;
	}
};

int main(){
 Rupee r=23;
 Dollar d=r;
 d.display();
 r.display();

 r=d;
 d.display();
 r.display();
 return 0;
}