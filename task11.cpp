#include <iostream>
using namespace std;
void speed();
main()
{
 while(true)
 {
  speed();
 }
}
 void speed()
{
   int inp;
   cout<<"Enter speed: ";
   cin>>inp;
   if(inp<=100)
    {
      cout<<"Perfect, you are going well.";
    }
    if(inp>100)
    {
      cout<<"Holt,you will be callenged.";
    }
  cout<<endl;
}