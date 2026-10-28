#include<stdio.h>
int main()
{
    int a;
    printf("Enter a Number: ");
    scanf("%d", &a);

        int res = (a % 2 == 0)? ( printf("Entered number is Even")):
         ( printf("Entered number is Odd"));
    
    return 0;
}