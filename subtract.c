#include <stdio.h>
int subtract(int a, int b);
int main() 
{
    int a = 10;
    int b = 5;
    printf("The difference of %d and %d is %d\n", a, b, subtract(a, b));
    return 0;
}
int subtract(int a, int b) 
{
    return a - b;
}
