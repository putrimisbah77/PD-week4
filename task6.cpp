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
 int x=3;
 int y=3;
 while(true)
 { 
  playerMode(x,y);
  if(y<15)
  {
    y=y+1;
  }
  if(y==15)
  {
   gotoxy(x,y-1);
   cout << " ";
   y=3;
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
  gotoxy(x,y-1);
  cout << " ";
  gotoxy(x,y);
  cout<<"P";
  y=3;
  Sleep(200);
 }