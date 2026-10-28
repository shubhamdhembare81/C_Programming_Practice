#include<stdio.h>
int main()
{
    float W, H;
    printf("Enter the weight in KG: \n");
    scanf("%f", &W);
    printf("Enter the Height in Meter: \n");
    scanf("%f", &H);

        float BMI;
        BMI = W/(H*H);
        printf("Your BMI is: %.5f \n", BMI);

        return 0;
}