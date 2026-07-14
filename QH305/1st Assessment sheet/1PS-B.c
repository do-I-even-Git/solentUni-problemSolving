//
// Created by raulf on 05/07/2026.
//
#include <stdio.h>

int main() {


    //Expenditure arrays are declared and given an array limit.
    double Food[14];
    double Trns[14];
    double Entrtm[14];


    //A message is printed asking the user to input values including decimals.
    //scanf() is utilised to intake this information and store it orderly into the arrays.
    //after each scanf() input, an if loop is put in place to throw an error message and shut process if input is negative.

    //Food block
    printf("Enter 14 values for Food expenses.\n Use 00.00 format.\n Don't use negative values.\n");
    printf("Please input below:\n\n");
    scanf("%lf", & Food[0]);
    scanf("%lf", & Food[1]);
    scanf("%lf", & Food[2]);
    scanf("%lf", & Food[3]);
    scanf("%lf", & Food[4]);
    scanf("%lf", & Food[5]);
    scanf("%lf", & Food[6]);
    if (Food[0] < 0 || Food[1] < 0 || Food[2] < 0 || Food[3] < 0 || Food[4] < 0 || Food[5] < 0 || Food[6] < 0) {
        printf("Invalid input. Spending cannot be negative.\n");
        return 0;
    }
    scanf("%lf", & Food[7]);
    scanf("%lf", & Food[8]);
    scanf("%lf", & Food[9]);
    scanf("%lf", & Food[10]);
    scanf("%lf", & Food[11]);
    scanf("%lf", & Food[12]);
    scanf("%lf", & Food[13]);
    if (Food[7] < 0 || Food[8] < 0 || Food[9] < 0 || Food[10] < 0 || Food[11] < 0 || Food[12] < 0 || Food[13] < 0) {
        printf("Invalid input. Spending cannot be negative.\n");
        return 0;
    }

    //Transport block
    printf("Enter 14 values for Transport expenses.\n Use 00.00 format.\n Don't use negative values.\n");
    printf("Please input below:\n\n");
    scanf("%lf", & Trns[0]);
    scanf("%lf", & Trns[1]);
    scanf("%lf", & Trns[2]);
    scanf("%lf", & Trns[3]);
    scanf("%lf", & Trns[4]);
    if (Trns[0] < 0 || Trns[1] < 0 || Trns[2] < 0 || Trns[3] < 0 || Trns[4] < 0) {
        printf("Invalid input. Spending cannot be negative.\n");
        return 0;
    }
    scanf("%lf", & Trns[5]);
    scanf("%lf", & Trns[6]);
    scanf("%lf", & Trns[7]);
    scanf("%lf", & Trns[8]);
    scanf("%lf", & Trns[9]);
    if (Trns[5] < 0 || Trns[6] < 0 || Trns[7] < 0 || Trns[8] < 0 || Trns[9] < 0) {
        printf("Invalid input. Spending cannot be negative.\n");
        return 0;
    }
    scanf("%lf", & Trns[10]);
    scanf("%lf", & Trns[11]);
    scanf("%lf", & Trns[12]);
    scanf("%lf", & Trns[13]);
    if (Trns[10] < 0 || Trns[11] < 0 || Trns[12] < 0 || Trns[13] < 0) {
        printf("Invalid input. Spending cannot be negative.\n");
        return 0;
    }

    //Entertainment block
    printf("Enter 14 values for Entertainment expenses.\n Use 00.00 format.\n Don't use negative values.\n");
    printf("Please input below:\n\n");
    scanf("%lf", & Entrtm[0]);
    scanf("%lf", & Entrtm[1]);
    scanf("%lf", & Entrtm[2]);
    scanf("%lf", & Entrtm[3]);
    scanf("%lf", & Entrtm[4]);
    scanf("%lf", & Entrtm[5]);
    if (Entrtm[0] < 0 || Entrtm[1] < 0 || Entrtm[2] < 0 || Entrtm[3] < 0 || Entrtm[4] < 0 || Entrtm[5] < 0) {
        printf("Invalid input. Spending cannot be negative.\n");
        return 0;
    }
    scanf("%lf", & Entrtm[6]);
    scanf("%lf", & Entrtm[7]);
    scanf("%lf", & Entrtm[8]);
    scanf("%lf", & Entrtm[9]);
    scanf("%lf", & Entrtm[10]);
    scanf("%lf", & Entrtm[11]);
    if (Entrtm[6] < 0 || Entrtm[7] < 0 || Entrtm[8] < 0 || Entrtm[9] < 0 || Entrtm[10] < 0 || Entrtm[11] < 0) {
        printf("Invalid input. Spending cannot be negative.\n");
        return 0;
    }
    scanf("%lf", & Entrtm[12]);
    scanf("%lf", & Entrtm[13]);
    if (Entrtm[12] < 0 || Entrtm[13] < 0) {
        printf("Invalid input. Spending cannot be negative.\n");
        return 0;
    }


    //Input values are separated into week 1 and 2, and stored separatedly in variables.
    double week1Food = (Food[0] + Food[1] + Food[2] + Food[3] + Food[4] + Food[5] + Food[6]);
    double week2Food = ( Food[7] + Food[8] + Food[9] + Food[10] + Food[11] + Food[12] + Food[13]);

    double week1Trns = (Trns[0] + Trns[1] + Trns[2] + Trns[3] + Trns[4] + Trns[5] + Trns[6]);
    double week2Trns = (Trns[7] + Trns[8] + Trns[9] + Trns[10] + Trns[11] + Trns[12] + Trns[13]);

    double week1Entrtm = (Entrtm[0] + Entrtm[1] + Entrtm[2] + Entrtm[3] + Entrtm[4] + Entrtm[5] + Entrtm[6]);
    double week2Entrtm = (Entrtm[7] + Entrtm[8] + Entrtm[9] + Entrtm[10] + Entrtm[11] + Entrtm[12] + Entrtm[13]);


    //Week sum ups are printed
    printf("Week 1 total spendings:\n\n");
    printf("Food: %lf pounds.\n", week1Food);
    printf("Transport: %lf pounds.\n", week1Trns);
    printf("Entertainment: %lf pounds.\n\n", week1Entrtm);

    printf("Week 2 total spendings:\n\n");
    printf("Food: %lf pounds.\n", week2Food);
    printf("Transport: %lf pounds.\n", week2Trns);
    printf("Entertainment: %lf pounds.\n\n", week2Entrtm);

    //Sum of both weeks are summed into totals stored into new variables
    double totalFood = (week1Food + week2Food);
    double totalTransport = (week1Trns + week2Trns);
    double totalEntertainment = (week1Entrtm + week2Entrtm);


    //Inputs are separated by position in the array, hypothetically classifying by day, to then calculate it's averages)
    double week1aveDaily = ((week1Food / 7) + (week1Trns / 7) + (week1Entrtm / 7));
    printf("Daily average spending for week 1 is: %2f pounds.\n\n", week1aveDaily);
    double week2aveDaily = ((week2Food / 7) + (week2Trns / 7) + (week2Entrtm / 7));
    printf("Daily average spending for week 2 is: %2f pounds.\n\n", week2aveDaily);



    //A hypothetical budget is decided for the week, double float
    double weeklyBudget = 700;


    //Here week totals, and grand total of previously obtained sums is calculated and stored into single variable.
    double week1TotalSpent = (week1Food + week1Trns + week1Entrtm);
    double week2TotalSpent = (week2Food + week2Trns + week2Entrtm);
    double totalSpent = (week1TotalSpent + week2TotalSpent);

    //Next, two if loops are used to crossreference total weekly spending against budget, printing accordingly after.
    if (week1TotalSpent < weeklyBudget) {
        printf("Spendings during Week 1 are within budget.\n");
    } else {
        printf("Spendings during Week 1 are over budget.\n");
    }

    if (week2TotalSpent < weeklyBudget) {
        printf("Spendings during Week 2 are within budget.\n\n");
    } else {
        printf("Spendings during Week 2 are over budget.\n\n");
    }

    //A block of if-else-if code is used to compare weekly spendings and print comparison results.
    double weekComparison = (week2TotalSpent - week1TotalSpent);
    if (weekComparison < 0) {
        printf("During week 2, spendings were decreased by %lf pounds.\n\n", weekComparison);
    }   else if  (weekComparison == 0){
       printf("During week 2, spendings have been exactly the same, with no increase/decrease.\n\n");
    } else if (weekComparison > 0) {
        printf("During week 2, spendings were increased by %lf pounds.\n\n", weekComparison);
    }

    //Lastly all the totals are printed along with a text clarifying each category precedent to the integer values, each on single line format.
    printf("The grand total of expenditures is: %lf pounds.\n", totalSpent);
    printf("The total expenditure on Food comes up to: %lf pounds.\n", totalFood);
    printf("The total expenditure on Transport comes up to: %lf pounds.\n", totalTransport);
    printf("The total expenditure on Entertaiment comes up to: %lf pounds.\n" , totalEntertainment);


    return 0;
}