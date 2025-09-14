#include <stdio.h>
int isLeapYear(int year) {
    if (year % 400 == 0) {
        return 1; 
    } else if (year % 100 == 0) {
        return 0; 
    } else if (year % 4 == 0) {
        return 1;
    } else {
        return 0; 
    }
}

int main() {
    int year;
    long long totalDays = 0; 
    int dayOfWeek;

    printf("Enter a year (e.g., 2025): ");
    scanf("%d", &year);

    for (int i = 1; i < year; i++) {
        if (isLeapYear(i)) {
            totalDays += 366; 
        } else {
            totalDays += 365; 
        }
    }

    dayOfWeek = totalDays % 7;

    printf("On January 1st, %d, it was a ", year);
    switch (dayOfWeek) {
        case 0:
            printf("Monday.\n");
            break;
        case 1:
            printf("Tuesday.\n");
            break;
        case 2:
            printf("Wednesday.\n");
            break;
        case 3:
            printf("Thursday.\n");
            break;
        case 4:
            printf("Friday.\n");
            break;
        case 5:
            printf("Saturday.\n");
            break;
        case 6:
            printf("Sunday.\n");
            break;
        default:
            printf("Error in calculation.\n");
            break;
    }

    return 0;
}