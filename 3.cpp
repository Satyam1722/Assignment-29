#include<iostream>
using namespace std;
class Item;

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
  
 

};

class Item
{
  int x;
public:


   Item()
   {

   }

   Item(Product &p)
   {
   	x=p.getData();
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

int main()
{
Item i1;
Product p1;
p1.setData(100);
i1=p1;
cout<<i1.getData();
return 0;
}