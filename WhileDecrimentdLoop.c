#include<stdio.h>
int main()
{
    int i;
    printf("Enter a Positive int: ");
    scanf("%d", &i);
    if (i<=0)
    {
        printf("Inter number is INVALID ");
    }
    else {

    while (i >= 1)
    {
        printf("%d ", i);
        i--;
    }
}
return 0;           
}