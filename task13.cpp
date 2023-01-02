#include <iostream>
using namespace std;
main()
{
 int holidays;
 int workingdays;
 int pmholi;
 int pmwork;
 int totalpm;
 int diff;
 int diffq;
 int diffr;
 while(true)
 {
 cout<<"Enter holidays: ";
 cin>>holidays;
 workingdays=365-holidays;
 pmholi=holidays*127;
 pmwork=workingdays*63;
 totalpm=pmholi+pmwork;
 diff=30000-totalpm;
 diffq=diff/60;
 diffr=diff%60;
 
  if(diff>=0)
  {
   cout<<"Tom will sleep well";
   cout<<endl;
   cout<<diffq<<" hour "<<diffr<<" minutes less for play";
  }
  if(diff<0)
  {
   diff=totalpm-30000;
   cout<<"Tom will ran away";
   cout<<endl;
   cout<<-diffq<<" hour "<<-diffr<<" minutes for play";
  }
  cout<<endl;
 }



}