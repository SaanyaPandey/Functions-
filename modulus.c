#include <stdio.h>
int modulus(int a, int b);
int main() 
{
    int a = 10;
    int b = 5;
    printf("The remainder of %d and %d is %d\n", a, b, modulus(a, b));  
    return 0;
}
int modulus(int a, int b) 
{
    return a % b;
}
    
