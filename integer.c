// c program to define integer data types
#include<stdio.h>
int main()
{
    // integer with possitive value
    int a=10;
    // integer with negitive value
    int b=-10;
    //U or u is used for unsigned int in c
    int c=89U;
    //L is l is used for long int int in d
    long int d=99998L;
    printf("integer value with possitive data: %d\n", a);
    printf("integer value with negitive data: %d\n", b);
    printf("integer value with an unsigned int data: %u\n", c);
    printf("integer value with an long int data: %d",d);
   return 0;
}