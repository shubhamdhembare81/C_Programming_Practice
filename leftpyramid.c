#include<stdio.h>

int main()
{
    int a;
    printf("Enter the nuimber of rows: ");
    scanf("%d", &a);

// for number of rows
    for (int i = 1; i <=a; i++)
    {
        // for space5
        for (int l = 1; l < a-l; l++)
        {
            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");

    }
    
    return 0;
}