#include<stdio.h>
float add(float y, float x){
return y/(x*x);
}
int main()
{
    float height, weight,BMI;
    printf("Enter your height: \n");
    scanf("%f", &height);
    printf("Enter your weight: \n");
    scanf("%f", &weight);
    printf("Your Height and weight is: %.2f & %.2f \n", height, weight);
    BMI = add(weight, height);
    printf("BMI is %.2f \n", BMI);
    return 0;
}