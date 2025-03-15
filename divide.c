#include <stdio.h>
int divide(int a, int b);
int main() 
{
    int a = 10;
    int b = 5;
    printf("The quotient of %d and %d is %d\n", a, b, divide(a, b));    
    return 0;
}
int divide(int a, int b) 
{
    return a / b;
}

