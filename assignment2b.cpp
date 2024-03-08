/*Write a menu driven program for Date in a CPP language using structure and also using class.
Date is having data members day, month, year. Implement the following functions.
void initDate();
void printDateOnConsole();
void acceptDateFromConsole();
bool isLeapYear();
*/
#include<iostream>
using namespace std;
 class Date
{
    int day;
    int month;
    int year;
    public:
    void initDate()
    {
        day=1;
        month=1;
        year=2001;

    }
    void printDateOnConsole()
    {

        cout<<"date:"<<day<<"/"<<month<<"/"<<year<<endl;

    }
    void acceptDateFromConsole()
    {
        cout<<"enter the day";
        cin>>day;
        cout<<"enter the month";
        cin>>month;
        cout<<"enter the year";
        cin>>year;

    }
    bool isLeapYear()
    {

        if((year%4==0&&year%100)||(year%400))
           return true;

        else
           return false;



    }
};
     int main ()
    {

        Date d;
        int choice;
        do{
            cout<<"enter the choice 1.initialise the date\n 2.print the data 3.accept the data \n 4.exit";
            cin>>choice;
            switch(choice){
                case 1:
                   d.initDate();
                   cout<<"initialized successfully";
                   break;
                case 2:
                   d.printDateOnConsole();
                   cout<<"print the data";
                   break;
                case 3:
                   d.acceptDateFromConsole();
                   cout<<"accept the data";

                case 4:
                   cout<<"exit";
                default:
                    cout<<"invalid number.please try again";
            }    

            } while(choice!=4);
return 0;



}

    

