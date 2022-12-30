#include<iostream>
using namespace std;

class Time{
  int a;
public:
	void display(){
		cout<<a<<endl;
	}
	void set(int x){
       a=x;
	}

	Time(){}
	Time(int x){ a=x;}
};

int main(){
	int duration;
	cout<<"Enter time duration in minutes"<<endl;
	cin>>duration;
	Time t1=duration;
	t1.display();
	return 0;
}