/*------------------------------------------------------
* Filename: Calc_Age.c
* Description: A program to calculate how long Gary has lived in days, months and years
* Author: Benaya Yesha'ayahu Halevi
-------------------------------------------------------*/

#include <stdio.h>

int main() {
    int DAYS_IN_YEAR = 365;
    int DAYS_IN_MONTH = 30;

    // Reset variables to default values (Unix Epoch)
    int current_day = 1, current_month = 1, current_year = 1970;
    int birthday_day = 1, birthday_month = 1, birthday_year = 1970;

    // Get current date and Gary's birthday from user
    printf("Enetr current day:\n");
    scanf("%d/%d/%d", &current_day, &current_month, &current_year);
    
    printf("Enter Gary's Birthday:\n");
    scanf("%d/%d/%d", &birthday_day, &birthday_month, &birthday_year);

    // Calculate Gary's age in days
    int garys_life_days = (current_year - birthday_year) * 365 + 
           (current_month - birthday_month) * 30 + 
           (current_day - birthday_day);

    // Output Gary's age in days, months, and years
    printf("Gary's age in days is: %d\n", garys_life_days);
    printf("Gary's age in months is: %f\n", (float)garys_life_days / DAYS_IN_MONTH);
    printf("Gary's age in years is: %f\n", (float)garys_life_days / DAYS_IN_YEAR);
    
    return 0;
}