/*Write a menu driven program for Date in a C. Declare a structure Date having data members
day, month, year. Implement the following functions.
void initDate(struct Date* ptrDate);
void printDateOnConsole(struct Date* ptrDate);
void acceptDateFromConsole(struct Date* ptrDate);
*/
#include<stdio.h>
struct Date{
    int day;
    int month;
    int year;
};
void initDate(struct Date* ptrDate)
{ptrDate->day=1;
 ptrDate->month=1;
 ptrDate->year=2024;

}
void printDateOnConsole(struct Date*ptrDate)
{
  printf("Date:%02d/%02d/%04d\n",ptrDate->day,ptrDate->month,ptrDate->year);
}
void acceptDateFromConsole(struct Date* ptrDate){
printf("Enter day: ");
scanf("%d",&ptrDate->day);
printf("Enter month: ");
scanf("%d",&ptrDate->month);
printf("Enter year:");
scanf("%d",&ptrDate->year);
}
int main(){
    struct Date date;
    int choice;
    initDate(&date);
    do{
        printf("\nMenu:\n");
        printf("1.print date\n");
        printf("2.accept date\n");
        printf("3.Exit\n");
        printf("enter your choice:");
        scanf("%d",&choice);
        
      
        switch(choice){
            case 1:
                printDateOnConsole(&date);
                break;
            case 2:
                acceptDateFromConsole(&date);
                break;
            case 3:
                printf("Exit\n");
                break;
            default:
                printf("invalid choice.please try again.\n");
        }        
        


    }while(choice!=3);
    return 0;
};    
         





          

    


