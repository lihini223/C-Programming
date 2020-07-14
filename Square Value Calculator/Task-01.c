#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

int square_value,num; //declare variables

printf("\n\nWelcome to Square Value Calculator !\n\n");

//getting inputs to calculate square value
printf("Enter number to calculate Square Value:");
scanf("%d",&num);

//calculating square value
square_value = num * num ;

//print Square value along with the user input number
printf("The square value of %d is : %d",num,square_value);

//print current system time
time_t rawtime;
struct tm * timeinfo;
time(&rawtime);
timeinfo = localtime(&rawtime);
printf("\n\nCurrent system time and date: %s", asctime(timeinfo));

return 0;
}

