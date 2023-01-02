#include <iostream>
using namespace std;
void function();
main()
{
 function();
}
 void function()
{
 int red;
 int white;
 int tulibs;
 float redp;
 float whitep;
 float tulibsp;
 float total;
 float discount;
 float ad;


 cout<<"Number of red rose:";
 cin>>red;
 cout<<"Number of white rose:";
 cin>>white;
 cout<<"Number of tulib rose:";
 cin>>tulibs;
 redp=red*2;
 whitep=white*4.1;
 tulibsp=tulibs*2.5;
 total=redp+whitep+tulibsp;
 cout<<"Total price: "<<total;
 cout<<endl;
 if (total>=200)
 {
  
  discount=total*0.2;
  ad=total-discount;
  cout<<"Price after discount: "<<ad;
 }


}