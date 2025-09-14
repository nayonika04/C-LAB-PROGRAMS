#include<stdio.h>
int main() {
   int side1,side2,side3;
   printf("enter the length of side 1:");
   scanf("%d", &side1);
   printf("enter the length of side 2:");
   scanf("%d", &side2);
   printf("enter the length of side 3");
   scanf("%d", &side3);

   if((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1)){

    if(side1 == side2 && side2 == side3){
    printf("this is an equilateral triangle./n");
    }
    else if(side1 == side2 || side2 == side3 || side1 == side3){
    printf("this is an isoceles triangle./n");
    }
    else {
        printf("this is a scalene triangle./n");
    }
   } else {
    printf("this is not a valid triangle./n");
   }
   return 0;
}