#include <stdio.h>
int multiply(int a, int b);
int main() 
{
    int a = 10;
    int b = 5;
    printf("The product of %d and %d is %d\n", a, b, multiply(a, b));   
    return 0;
}
int multiply(int a, int b) 
{
    return a * b;
}

