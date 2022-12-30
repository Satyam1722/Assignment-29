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

	operator int(){
		return x;
	}
};

int main(){
	Rupee r=678;
	int x=r;
	cout<<x;
	return 0;
}