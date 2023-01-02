#include <iostream>
#include <windows.h>
using namespace std;
void name();
void gotoxy(int x,int y);
main()
{ int x;
  int y;
  name();
}
 void name()
 {
gotoxy(24,13);
   cout<<"  #   # #  ###  ###    #  #  #                          "<<endl;
gotoxy(24,14);
   cout<<"  ## ## # #     #  #  # # #  #                       "<<endl;
gotoxy(24,15);
   cout<<"  # # # #  ###  ###  #### ####                           "<<endl;
gotoxy(24,16);
   cout<<"  #   # #     # #  # #  # #  #                     "<<endl;
gotoxy(24,17);
   cout<<"  #   # #  ###  ###  #  # #  #                     "<<endl;
 }
 void gotoxy(int x,int y)
 {
  COORD coordinates;
  coordinates.X=x;
  coordinates.Y=y;
  SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
 } 