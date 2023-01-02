#include <iostream>
using namespace std;
void function();
main()
{
 
 while(true)
 {
  function();
 }
 
}
 void function()
{
 string name;
 int price;
 int discount;
 int total;

 cout<<"Enter your country name: ";
 cin>>name;
 cout<<"Enter Ticket price: ";
 cin>>price;
 if (name=="pakistan")
 {
  discount=price*0.05;
  total=price-discount;
  cout <<"Total with discount: "<<total;
 }
 if (name=="ireland")
 {
  discount=price*0.1;
  total=price-discount;
  cout <<"Total with discount: "<<total;
 }
 if (name=="india")
 {
  discount=price*0.2;
  total=price-discount;
  cout <<"Total with discount: "<<total;
 }
 if (name=="england")
 {
  discount=price*0.3;
  total=price-discount;
  cout <<"Total with discount: "<<total;
 }
 if (name=="canada")
 {
  discount=price*0.45;
  total=price-discount;
  cout <<"Total with discount: "<<total;
 }
 cout<<endl;
}