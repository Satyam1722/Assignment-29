#include<iostream>
using namespace std;

class Item
{
  int x;
public:


   Item()
   {

   }

   Item(int a){
    x=a;
   }


  void setData(int a)
  {
    x=a;
  }

  int getData()
  {
    return x;
  }


};

class Product
{
  int x;
public:

  void setData(int a)
  {
  	x=a;
  }

  int getData()
  {
  	return x;
  }

  operator Item()
  {
    return x;
  }
  
 

};



int main()
{
Item i1;
Product p1;
p1.setData(10);
i1=(Item)p1;
cout<<i1.getData();
return 0;
}