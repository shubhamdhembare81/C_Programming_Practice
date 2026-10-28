#include<stdio.h>
int main()

{
    int Age;
    printf("Enter your Age: ");
    scanf("%d", &Age);
    
    char EyeSiteTest;
    printf("You passed the eyeste test(Y/N): ");
    scanf(" %c", &EyeSiteTest);

    float TrafficRuleTest;
    printf("You passed the Traffic Rule Test in (percentage): ");
    scanf("%f", &TrafficRuleTest);

        if (Age >= 18)
        {
            if (EyeSiteTest == 'Y')
            {
                if (TrafficRuleTest > 60)
                {
                      printf("You Passed all Test, So Your are eligible for Drivinbg license.");
                }
                      else
                      {
                      printf("You are not Eligible for Driving License");
                      }
            }
            else
                      {
                      printf("You are not Eligible for Driving License");
                      }  
        }
        else
                      {
                      printf("You are not Eligible for Driving License");
                      }
        
    return 0;
}