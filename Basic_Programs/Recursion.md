# Recursion In C Programming

##  Sum of Natural Numbers Using Recursion
```
#include <stdio.h>
int sum(int n);

int main() {
    int number, result;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    result = sum(number);

    printf("sum = %d", result);
    return 0;
}

int sum(int n) {
    if (n != 0)
        // sum() function calls itself
        return n + sum(n-1); 
    else
        return n;
}
```
: Output :
```
Enter a positive integer:3
sum = 6
```
image of recursion process

![image of recursion process](https://github.com/lihini223/C-Programming/blob/master/Basic_Programs/recursion-natural-numbers.png)
