#include <iostream>
using namespace std;
main()
{
 string inp1;
 while(true)
 {
  cout<<"Enter a function: ";
  cin>>inp1;
  if(inp1=="true")
  {
   cout<<"False";
  }
  if(inp1=="false")
  {
   cout<<"True";
  }
  cout<<endl;
 }
}