//The population of a town is 100000. The population has increased steadily at the rate of 10% per year for the last 10 years. Write a program to determine the population at the end of each year in the last decade.
#include<stdio.h>
int main(){
    int i,rate=10,year, population = 100000, population2;
    printf("Enter the number of years : \n");
    scanf("%f",&year);
 
    for(i=1;i<=year;i++){
        population2 = (population*rate)/100;
        population = population + population2;
        printf("Population after %.0f years is : %.3f\n",i,population);
 
    }
    return 0;
 
}
 
