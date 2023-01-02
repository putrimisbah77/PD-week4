#include<iostream>
using namespace std;

void printMenu();
void header();
main()
{  
   int choice;
   string name;
   int mMarks;
   int iMarks;
   int eMarks;
   string name1;
   int mMarks1;
   int iMarks1;
   int eMarks1;
   float pMatric;
   float pinter;
   float pe;
   float total;
   float pMatric1;
   float pinter1;
   float pe1;
   float total1;

   int num;
  while(true)
  {
   system("cls");
   header();
   printMenu();
   cout<<endl;
   cout<<" Enter choice: ";
   cin>>choice;

   if(choice==1)
   {
    system("cls");
    cout<<"You chose: 1"<<endl;

    cout<<"Enter your name: ";
    cin>>name;
    cout<<"Enter your Matric marks(out of 1100): ";
    cin>>mMarks;
    cout<<"Enter your inter marks(out of 550): ";
    cin>>iMarks;
    cout<<"Enter your Ecat marks(out of 400): ";
    cin>>eMarks;
  
    cout<<endl;
    cout<< "Press any number to continue.........";
    cin>>num;
   }
   if(choice==2)
   {
    system("cls");
    cout<<"You chose: 2"<<endl;  
    cout<<"Enter your name: ";
    cin>>name1;
    cout<<"Enter your Matric marks(out of 1100): ";
    cin>>mMarks1;
    cout<<"Enter your inter marks(out of 550): ";
    cin>>iMarks1;
    cout<<"Enter your Ecat marks(out of 400): ";
    cin>>eMarks1;
  
    cout<<endl;
    cout<< "Press any number to continue.........";
    cin>>num; 
   }
   if(choice==3)
   {
    system("cls");
    pMatric=(mMarks*100)/1100*0.3;
    pinter=(iMarks*100)/550*0.3;
    pe=(eMarks*100)/400*0.4;
    total=pMatric+pinter+pe;

    cout<<name<<" Your aggregate is: "<<total;
    cout<<endl;
    cout<<"enter any number to continue. ";
    cin>>num;
   }
   if(choice==4)
   {
    system("cls");
    pMatric1=(mMarks1*100)/1100*0.3;
    pinter1=(iMarks1*100)/550*0.3;
    pe1=(eMarks1*100)/400*0.4;
    total1=pMatric1+pinter1+pe1;

    cout<< name1 <<" Your aggregate is: "<<total1;
    cout<<endl;
    cout<<"enter any number to continue. ";
    cin>>num;
    }
    if(choice == 5)
    { 
     system("cls");
    if(total>total)
     {cout<<"";
     cout<< name <<" you asign rollno1";
     }
    if(total>total1)
     {cout<<"";
     cout<< name1 <<" you asign rollno1";
     } 
      cout<<endl;
      cout<<"enter any number to continue. ";
      cin>>num;
   }
  }
   
}
  void header()
 {
   cout<<"  **********************                   "<<endl;
   cout<<"  *    UET LAHORE      *                   "<<endl;
   cout<<"  **********************                   "<<endl;
   cout<<"                                           "<<endl;
   cout<<"                                           "<<endl;
   cout<<"                                           "<<endl;
   cout<<"                                           "<<endl;
   cout<<"                                           "<<endl;
   cout<<" Welcome to uet addmission Managment system"<<endl;
   cout<<"                                           "<<endl;
   cout<<"                                           "<<endl;
   cout<<"                                           "<<endl;
   cout<<"                                           "<<endl;
}
  void printMenu()
 { 

   cout<<" Press 1 to enter Details of first student!               "<<endl;
   cout<<" Press 2 to enter Details of second student!              "<<endl;
   cout<<" Press 3 to calculate aggregate of first student.         "<<endl;
   cout<<" Press 4 to calculate aggregate of second student.        "<<endl;
   cout<<" Press 5 to display the students with rollnumber1.        "<<endl;

  }