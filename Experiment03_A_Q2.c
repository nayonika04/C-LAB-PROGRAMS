#include<stdio.h>
int main() {
    float weight,height,bmi;
    printf("enter your weight in kilograms:");
    scanf("%f", &weight);
    printf("enter your height in meters:");
    scanf("%f", &height);

    bmi = weight/(height * height);
    
    printf("your BMI is: %.2f/n", bmi);
     if (bmi < 15.0) {
        printf("BMI Category: Starvation\n");
    } else if (bmi >= 15.1 && bmi <= 17.5) {
        printf("BMI Category: Anorexic\n");
    } else if (bmi >= 17.6 && bmi <= 18.5) {
        printf("BMI Category: Underweight\n");
    } else if (bmi >= 18.6 && bmi <= 24.9) {
        printf("BMI Category: Ideal\n");
    } else if (bmi >= 25.0 && bmi <= 29.9) {
        printf("BMI Category: Overweight\n");
    } else if (bmi >= 30.0 && bmi <= 39.9) {
        printf("BMI Category: Obese\n");
    } else { // bmi >= 40.0
        printf("BMI Category: Morbidity Obese\n");
    }

    return 0;
}
