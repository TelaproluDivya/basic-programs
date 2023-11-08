#include<stdio.h>
int main()
{
    int n,reversed=0,remainder,orignal; 
    printf("enter an integer n");
    scanf("%d", &n); 
    orignal=n;
    while(n!=0)
    { 
        remainder=n%10;
        reversed=reversed*10+remainder;
        n=n/10;
    }
   
    if(orignal==reversed)
        printf("%d it is a palindram",orignal);
    else
        printf("%d it is not palindram",orignal);
        return 0;
}



    

     


