#include<stdio.h>

int nat(int n){
    if(n==0){
        return 0;
    }
    else{
        return n+nat(n-1);
    }
}

int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d ", &n);

    printf(" Sum of n number i %d", nat(n));

    return 0;
}