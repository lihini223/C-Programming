# Q-1
Allow user to input 2 integer values x and y. The program should calculate and display power as the output.<br/>
ex:- If user input x=5 and y=3, the system will display output as 125.
```
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number,exponent,ans=1,i=1;

    printf("Enter number value:");
    scanf("%d",&number);
    printf("Enter exponent value:");
    scanf("%d",&exponent);

    while(i<= exponent){
        ans *= number;
        i++;
    }

    printf("%d to the Power %d is %d ",number,exponent,ans);
    return 0;
}
```
