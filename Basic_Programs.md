# Welcome to Basic Programs in C 
This File is created to upload basic C programming essentials.

### Printing HELLO WORLD! 

    #include <stdio.h>
    int main()
    {
        printf("Hello world!");
        return 0;
    }

**printf()** is a system defined function under <stdio.h> header. It is used to printout data on the screen.

### Getting inputs from user

- scanf() is a inbuilt function under <stdio.h> and is used to take inputs from user.
- %d is used to take and represent numbers in integer formart. 
- %f is used to take and represent numbers with the fraction part.
- %c is used to take and represent only one character.
- & is used to assign the input value to the variable and store it at that particular location.


        #include<stdio.h>

        int main()
        {

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
        
        return 0;
        }
        
### How to printout the ASCII values of characters
    #include<stdio.h>

    int main()
    {
    char c;
    printf("Enter a character : ");
    scanf("%c" , &c);
    printf("\n ASCII value of %c = %d",c,c);
    return 0;
    }

## Conditionals in C 

Conditional statements are used to decision making in C
- if-else statement
- switch statement
- Conditional operator statement (? : operator)
- goto statement


### if-else statement
There are different forms of if statements,
1. Simple if statement
2. if-else statement
3. Nested if-else statement
4. else-if statement

##### Simple if statement

    if(expression)
    {
        statement inside;
    }
  
##### if-else statement 

    if(expression)
    {
        statement block1;
    }
    else
    {
        statement block2;
    }
