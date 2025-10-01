#include <stdio.h>

int main() {
    float length1, breadth1, perimeter1;
    float length2, breadth2, perimeter2;
    float length3, breadth3, perimeter3;

    printf("Enter length and breadth for Rectangle 1: ");
    scanf("%f %f", &length1, &breadth1);
    perimeter1 = 2 * (length1 + breadth1);

    printf("Enter length and breadth for Rectangle 2: ");
    scanf("%f %f", &length2, &breadth2);
    perimeter2 = 2 * (length2 + breadth2);

    printf("Enter length and breadth for Rectangle 3: ");
    scanf("%f %f", &length3, &breadth3);
    perimeter3 = 2 * (length3 + breadth3);

    float highestPerimeter = (perimeter1 > perimeter2) ? 
                             ((perimeter1 > perimeter3) ? perimeter1 : perimeter3) : 
                             ((perimeter2 > perimeter3) ? perimeter2 : perimeter3);

    printf("\nPerimeter of Rectangle 1: %.2f\n", perimeter1);
    printf("Perimeter of Rectangle 2: %.2f\n", perimeter2);
    printf("Perimeter of Rectangle 3: %.2f\n", perimeter3);
    printf("The highest perimeter among the three rectangles is: %.2f\n", highestPerimeter);

    return 0;
}
