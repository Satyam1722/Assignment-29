#include<iostream>
using namespace std;

class Dollar{
  int x;
public:
	Dollar(int a){
		x=a;
	}
	Dollar(){

	}

	void display(){
		cout<<x<<endl;
	}
};

int main(){
  int x=50;
  Dollar d;
  d=x;
  d.display();
	return 0;
}