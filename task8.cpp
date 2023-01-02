#include <iostream>
using namespace std;
main()
{
 int num1;
 int num2;
 while(true)
 {
  cout<<"Enter first digit: ";
  cin>>num1;
  cout<<"Enter second digit: ";
  cin>>num2;
  if (num1==num2)
  {
   cout<<"True";
  }
  if (num1!=num2)
  {
   cout<<"Fals";
  }
  cout<<endl; 
 }
 
}