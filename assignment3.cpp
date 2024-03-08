/*

Write a menu driven program for Student in CPP language. Create a class student with data
members roll no, name and marks. Implement the following functions
void initStudent();
void printStudentOnConsole();
void acceptStudentFromConsole();
*/
#include<iostream>
using namespace std;
class student
{
    int rollno;
    string name;
    int marks;
    public:
    void initStudent()
    {   
       rollno=1;
       name="pooja";
       marks=100;

    } 


    void printStudentOnConsole()
    {

        cout<<rollno<<endl;
        cout<<name<<endl;
        cout<<marks<<endl;

    }
    void acceptStudentFromConsole()
   {
        cout<<"enter rollno";
        cin>>rollno;
        cout<<"enter name";
        cin>>name;
        cout<<"enter marks";
        cin>>marks;


    }
};
int main()
{
    student s;
    int choice;
    do{
        cout<<"enter the choice\n 1.initialise \n 2.print the info \n 3.accept the info \n 4.exit";
        cin>>choice;
        
        switch(choice)
        {
            case 1:
             s.initStudent();
             cout<<"initialized successfully"<<endl;

             break;

            case 2:
             s.printStudentOnConsole();
             cout<<"print the info"<<endl;
             break;
            case 3:
             s.acceptStudentFromConsole
             ();
              cout<<"accept the info";
              break;
            case 4:
               cout<<"exit";
               break;

             
        }

    }while(choice!=4);
    return 0;
}




