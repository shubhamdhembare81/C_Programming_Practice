#include<stdio.h>
int main() {
    int i = 1;
    int n;
    int add = 0;

    printf("Enter a number: ");
    scanf("%d", &n);
    if (n<0)
    {
        printf("Input is invalid");
    }
    else
    {

    while (i <= n)
    {
        add = add + i;
        i++ ;
    }
        printf("sum of N number is %d", add);
}



    return 0;
    
}