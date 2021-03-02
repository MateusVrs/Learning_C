#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double height, weight;
    printf("Enter your height (m): ");
    scanf("%lf", &height);
    printf("Enter your weight (kg): ");
    scanf("%lf", &weight);
    double result = weight / pow(height, 2);
    printf("Your BMI is %.2f", result);
    return 0;
}
