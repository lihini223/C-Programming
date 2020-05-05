#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Printing Hello World
    printf("Hello world!\n");
    
    //Taking inputs from user
    int num;
    float fraction;
    char character;
    
    // Taking integer as input from user
    printf("Enter an integer:\n");
    scanf("%d", &num);
    
    // Taking float or fraction as input from the user
    printf("\nEnter a Decimal number\n");
    scanf("%f", &fraction);
    
    // Taking Character as input from the user
    printf("\nEnter a Character\n");
    scanf("%c",&character);
}
