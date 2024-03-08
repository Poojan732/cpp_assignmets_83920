/*Write a menu driven program for Date in a CPP language using structure and also using class.
Date is having data members day, month, year. Implement the following functions.
void initDate();
void printDateOnConsole();
void acceptDateFromConsole();
bool isLeapYear();
*/
#include<iostream>
using namespace std;
struct Date {
    int day;
    int month;
    int year;

    void initDate(){
        day=1;
        month=1;
        year=2000;

    }
    
    void printDateOnConsole(){
        cout<<"date:"<<day<<"/"<<month<<"/"<<year<<endl;

    }

    void acceptDateFromConsole(){
        cout<<"Enter day: ";
        cin>>day;
        cout<<"Enter month:";
        cin>>month;
        cout<<"Enter year:";
        cin>>year;

    }
    bool isLeapYear(){
        if((year % 4==0 && year % 100!=0)|| (year % 400==0))
          return true;

        else
          return false;

    }

};
int main(){
    int choice;
    Date d;
    do{
        cout<<"\n Menu:\n 1.Initialize date 2.Print date\n 3. Accept date\n 4.is leap year or not? \n 5.exit";
        cin>>choice;




        switch (choice)
        {
            case 1:
              d.initDate();
              cout<<"date initialized successfully."<<endl;
              break;
            case 2:
               
              d.printDateOnConsole();
              break;
            case 3:
               d.acceptDateFromConsole();
                 break;
            case 4:
               cout<<"is leap year"<< (d.isLeapYear()?"yes":"no")<<endl;
               break;
            case 5:
               cout<<"exit"<<endl;
               break;
            default:
                cout<<"Invalid choice.please try again"<<endl;
            
              
        }
    }while (choice!=5);
    return 0;
}



