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
- If the expression returns true, then the **statement-inside** will be executed, otherwise **statement-inside** is skipped and            only the **statement-outside** is executed.

##### if-else statement 

    if(expression)
    {
        statement block1;
    }
    else
    {
        statement block2;
    }
- If the expression is true, the **statement-block1** is executed, else **statement-block1** is skipped and **statement-block2** is executed. 
    
##### Nested if-else statement

    if( expression )
    {
        if( expression1 )
        {
            statement block1;
        }else 
        {
            statement block2;
        }
    }else
    {
    statement block3;
    }
- if expression is false then **statement-block3** will be executed, otherwise the execution continues and enters inside the first if to perform the check for the next if block, where if expression 1 is true the **statement-block1** is executed otherwise **statement-block2** is executed. 

##### else-if statement

    if(expression1)
    {
        statement block1;
    }else if(expression2) 
    {
        statement block2;
    }else if(expression3 ) 
    {
        statement block3;
    }
    else 
        default statement;
- The expression is tested from the top(of the ladder) downwards. As soon as a true condition is found, the statement associated with it is executed.

### :sparkles: Important facts about if statements 
- A single if statement can be included without curly braces.
        
        int a = 5;
        if(a > 4)
        printf("Single if statement ");
        
 but if we have more than one statement inside if condition, then we must enclose them inside curly braces.
- **==** must be used for comparison in the expression of if condition, if you use = the expression will always return true, because it performs assignment not comparison.
- Other than 0(zero), all other values are considered as true. 
    
        if(10)
        printf("hello");
        
  In this example "hello" will be printed.

## Switch Statement

    switch(expression)
    {
        case value-1:
    	    block-1;
    	    break;
        case value-2:
    	    block-2;
            break;
        case value-3:
    	    block-3;
    	    break;
        case value-4:
    	    block-4;
   	        break;
        default:
   	        default-block;
    	    break;
    }

### Rules for using switch statement 

1. The expression (after switch keyword) must yield an integer value i.e the expression should be an integer or a variable or an expression that evaluates to an integer.
2. The case label values must be unique.
3. The case label must end with a colon(:)
4. The next line, after the case statement, can be any valid C statement.
## Conditional operator statement
