#include<stdio.h>
int add(int x, int y){
return x+y;
}
int main()
{
    int sum = add(10,20);
    printf("Sum is %d ", sum);
    return 0;
}