#include <iostream>
#include <windows.h>
using namespace std;
void maze();
void gotoxy(int x,int y);
void playerMode(int x, int y);
main()
{
 system("cls");
 maze();
 int x=5;
 int y=5; 
 while(true)
 { 
  playerMode(x,y);
  if(x<15)
  {
    x=x+1;
  }
  if(y<15)
  {
   y=y+1;
  }
  if(y == 15)
  {
   x=x-1;
  }
  if(x == 5)
  {
   y=y-1;
  }
 }
  
 
 
}
 void maze()
{
 cout <<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<endl;
 cout <<"$                                                                       $" <<endl;
 cout <<"$                                                                       $" <<endl;
 cout <<"$                                                                       $" <<endl;
 cout <<"$                                                                       $" <<endl;
 cout <<"$                                                                       $" <<endl;
 cout <<"$                                                                       $" <<endl;
 cout <<"$                                                                       $" <<endl;
 cout <<"$                                                                       $" <<endl;
 cout <<"$                                                                       $" <<endl;
 cout <<"$                                                                       $" <<endl;
 cout <<"$                                                                       $" <<endl;
 cout <<"$                                                                       $" <<endl;
 cout <<"$                                                                       $" <<endl;
 cout <<"$                                                                       $" <<endl;
 cout <<"$                                                                       $" <<endl;
 cout <<"$                                                                       $" <<endl;
 cout <<"$                                                                       $" <<endl;
 cout <<"$                                                                       $" <<endl;
 cout <<"$                                                                       $" <<endl;
 cout <<"$                                                                       $" <<endl;
 cout <<"$                                                                       $" <<endl;
 cout <<"$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" <<endl;

}
 void gotoxy(int x,int y)
 {
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
 } 
  void playerMode(int x, int y)
 {
  gotoxy(x-1,y);
  cout << " ";
  gotoxy(x,y);
  cout<<"P";
  x=5;
  gotoxy(x,y-1);
  cout << " ";
  gotoxy(x,y);
  cout<<"P";
  y=5;
  Sleep(200);
 }
 