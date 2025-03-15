#include <stdio.h>
int add(int a, int b);
int main() 
{
    int a = 10;
    int b = 20;
    int result = add(a, b);
    printf("The sum of %d and %d is %d\n", a, b, result);
    return 0;
}
int add(int a, int b) 
{
    return a + b;
}