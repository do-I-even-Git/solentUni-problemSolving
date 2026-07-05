//
// Created by raulf on 05/07/2026.
//
#include <stdio.h>

int main() {

    //Expenditure arrays are declared and given an array limit

    double Food[14];
    double Transport[14];
    double Entertainment[14];


    //A message is printed asking the user to input values including decimals.
    //scanf() is utilised to intake this information and store it orderly into the arrays.
    //after each scanf() input, an if loop is put in place to throw an error message and shut process if input is negative.

    //Food block
    printf("Enter all three values of your Food expenses, use the 00.00 format\n");
    scanf("%lf", & Food[0]);
    if (Food[0] < 0) {
        printf("Invalid input. Spending cannot be negative.\n");
        return 0;
    }
    scanf("%lf", & Food[1]);
    if (Food[1] < 0) {
        printf("Invalid input. Spending cannot be negative.\n");
        return 0;
    }
    scanf("%lf", & Food[2]);
    if (Food[2] < 0) {
        printf("Invalid input. Spending cannot be negative.\n");
        return 0;
    }

    //Transport block
    printf("Enter all three values of your Transport expenses, use the 00.00 format\n");
    scanf("%lf", & Transport[0]);
    if (Transport[0] < 0) {
        printf("Invalid input. Spending cannot be negative.\n");
        return 0;
    }
    scanf("%lf", & Transport[1]);
    if (Transport[1] < 0) {
        printf("Invalid input. Spending cannot be negative.\n");
        return 0;
    }
    scanf("%lf", & Transport[2]);
    if (Transport[2] < 0) {
        printf("Invalid input. Spending cannot be negative.\n");
        return 0;
    }

    //Entertainment block
    printf("Enter all three values of your Entertainment expenses, use the 00.00 format\n");
    scanf("%lf", & Entertainment[0]);
    if (Entertainment[0] < 0) {
        printf("Invalid input. Spending cannot be negative.\n");
        return 0;
    }
    scanf("%lf", & Entertainment[1]);
    if (Entertainment[1] < 0) {
        printf("Invalid input. Spending cannot be negative.\n");
        return 0;
    }
    scanf("%lf", & Entertainment[2]);
    if (Entertainment[2] < 0) {
        printf("Invalid input. Spending cannot be negative.\n");
        return 0;
    }


    //The sum of long floats within each array is calculated and stored into correspondent variables.

    double totalFood = (Food[0] + Food[1] + Food[2]);
    double totalTransport = (Transport[0] + Transport[1] + Transport[2]);
    double totalEntertainment = (Entertainment[0] + Entertainment[1] + Entertainment[2]);


    //Inputs are separated by position in the array, hypothetically classifying by day, to then calculate it's averages)

    double aveDaily = ((totalFood + totalTransport + totalEntertainment) / 3);
    printf("Daily average is: %2f pounds.\n", aveDaily);


    //Here the grand total of previously obtained sums is calculated and stored into a single variable.

    double totalSpent = (totalFood + totalTransport + totalEntertainment);


    //A hypothetical budget is decided for the week, double float

    double weeklyBudget = 99.99;


    //Next, an if loop is used to print a message or another depending wether if total expenditures are within set budget.

    if (totalSpent < weeklyBudget) {
        printf("Within budget.\n");
    } else {
        printf("Over budget.\n");
    }


    //Lastly all the totals are printed along with a text clarifying each category precedent to the integer values, each on single line format.

    printf("The grand total of expenditures is: %lf pounds.\n", totalSpent);
    printf("The total expenditure on Food comes up to: %lf pounds.\n", totalFood);
    printf("The total expenditure on Transport comes up to: %lf pounds.\n", totalTransport);
    printf("The total expenditure on Entertaiment comes up to: %lf pounds.\n" , totalEntertainment);


    return 0;
}