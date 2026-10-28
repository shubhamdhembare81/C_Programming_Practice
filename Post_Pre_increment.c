#include<stdio.h>
int main()
{
    int i = 7;
    int j = ++i;
    int k = i++;
    printf("value of i = %d \n", i);
    printf("value of j = %d \n", j);
    printf("value of k = %d \n", k);

    return 0;

}