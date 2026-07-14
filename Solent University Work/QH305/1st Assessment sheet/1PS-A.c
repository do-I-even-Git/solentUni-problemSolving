#include <stdio.h>

int main() {


//Name and value _arrays_ are inventoried to host _user input_.
    char cat1Name[99] = "";
    float cat1Vals[14] = {0};
    char cat2Name[99] = "";
    float cat2Vals[14] = {0};
    char cat3Name[99] = "";
    float cat3Vals[14] = {0};
    char cat4Name[99] = "";
    float cat4Vals[14] = {0};
    char cat5Name[99] = "";
    float cat5Vals[14] = {0};
    char cat6Name[99] = "";
    float cat6Vals[14] = {0};
    char cat7Name[99] = "";
    float cat7Vals[14] = {0};
    char cat8Name[99] = "";
    float cat8Vals[14] = {0};
    char cat9Name[99] = "";
    float cat9Vals[14] = {0};
    char cat10Name[99] = "";
    float cat10Vals[14] = {0};

    //Total category count is taken from _user input_.
    int catAmount;

    printf("\n\nHow many spending categories would you like to create today? :)\n");
    printf("Please use 00 format, and remember the maximum possible amount is 10.\n\n");
    scanf("%d", &catAmount);

    //Category name is taken from _user input_ and allocated to dedicated _variable_, using an _i for loop_.
    for (int i = 0; i < catAmount; i++) {
        printf("Enter category %d name now:\n\n ", i + 1);
        switch (i) {
            case 0:
        scanf("%s", &cat1Name);
                break;
            case 1:
        scanf("%s", &cat2Name);
                break;
            case 2:
        scanf("%s", &cat3Name);
                break;
            case 3:
        scanf("%s", &cat4Name);
                break;
            case 4:
        scanf("%s", &cat5Name);
                break;
            case 5:
        scanf("%s", &cat6Name);
                break;
            case 6:
        scanf("%s", &cat7Name);
                break;
            case 7:
        scanf("%s", &cat8Name);
                break;
            case 8:
        scanf("%s", &cat9Name);
                break;
            case 9:
        scanf("%s", &cat10Name);
                break;
        }


        //_Value_ worth for 2 weeks (14 _values_) is taken from _user input_ and allocated through correspondent _array_.
        //_Value array_ is picked by the previous _i for loop_, same as _name_.
        //_Values_ are taken through a _nested for loop_ iterating within the allocated _array_.
        printf("\n Input now 14 values for category %d.\n",  i + 1);
        printf("\n Negative values are not accepted.\n Input values using the 00.00 format, starting with the most recent.\n");
            for (int j = 13; j > -1; j--) {
                printf("\n%d value inputs remaining.\n", j + 1);

                //_Value_ is temporarily stored into a _variable_ dedicated to check with an _if statement_ if the number
                //is negative or positive.
                //If _value_ is negative, a _message_ informs of error and instructs the process needs restart.
                float catValue;
                scanf("%f", &catValue);
                if (catValue < 0) {
                    printf("\n\nInvalid value. Spending costs can't be negative.\nPlease restart process\n\n");
                    return 0;
                }

                //If _value_ is positive, a _switch statement_ allocates it through the array using the _j for loop_.
                switch (i) {
                    case 0: cat1Vals[j] = catValue;
                        break;
                    case 1: cat2Vals[j] = catValue;
                        break;
                    case 2: cat3Vals[j] = catValue;
                        break;
                    case 3: cat4Vals[j] = catValue;
                        break;
                    case 4: cat5Vals[j] = catValue;
                        break;
                    case 5: cat6Vals[j] = catValue;
                        break;
                    case 6: cat7Vals[j] = catValue;
                        break;
                    case 7: cat8Vals[j] = catValue;
                        break;
                    case 8: cat9Vals[j] = catValue;
                        break;
                    case 9: cat10Vals[j] = catValue;
                        break;
                }

            }


    }

    //_user input_ is finished, now code will automatically calculate and filter content to display.
printf("\n\n============================\n====================EXPENDITURE BREAKDOWN====================\n============================\n\n");
    //Weekly and biweekly agrupations of _value_  are added up and stored into new _variables_.
    float cat1Week1 = (cat1Vals[0] + cat1Vals[1] + cat1Vals[2] + cat1Vals[3] + cat1Vals[4] + cat1Vals[5] + cat1Vals[6]);
    float cat1Week2 = (cat1Vals[7] + cat1Vals[8] + cat1Vals[9] + cat1Vals[10] + cat1Vals[11] + cat1Vals[12] + cat1Vals[13]);
    float cat1Total = (cat1Week1 + cat1Week2);
    float cat2Week1 = (cat2Vals[0] + cat2Vals[1] + cat2Vals[2] + cat2Vals[3] + cat2Vals[4] + cat2Vals[5] + cat2Vals[6]);
    float cat2Week2 = (cat2Vals[7] + cat2Vals[8] + cat2Vals[9] + cat2Vals[10] + cat2Vals[11] + cat2Vals[12] + cat2Vals[13]);
    float cat2Total = (cat2Week1 + cat2Week2);
    float cat3Week1 = (cat3Vals[0] + cat3Vals[1] + cat3Vals[2] + cat3Vals[3] + cat3Vals[4] + cat3Vals[5] + cat3Vals[6]);
    float cat3Week2 = (cat3Vals[7] + cat3Vals[8] + cat3Vals[9] + cat3Vals[10] + cat3Vals[11] + cat3Vals[12] + cat3Vals[13]);
    float cat3Total = (cat3Week1 + cat3Week2);
    float cat4Week1 = (cat4Vals[0] + cat4Vals[1] + cat4Vals[2] + cat4Vals[3] + cat4Vals[4] + cat4Vals[5] + cat4Vals[6]);
    float cat4Week2 = (cat4Vals[7] + cat4Vals[8] + cat4Vals[9] + cat4Vals[10] + cat4Vals[11] + cat4Vals[12] + cat4Vals[13]);
    float cat4Total = (cat4Week1 + cat4Week2);
    float cat5Week1 = (cat5Vals[0] + cat5Vals[1] + cat5Vals[2] + cat5Vals[3] + cat5Vals[4] + cat5Vals[5] + cat5Vals[6]);
    float cat5Week2 = (cat5Vals[7] + cat5Vals[8] + cat5Vals[9] + cat5Vals[10] + cat5Vals[11] + cat5Vals[12] + cat5Vals[13]);
    float cat5Total = (cat5Week1 + cat5Week2);
    float cat6Week1 = (cat6Vals[0] + cat6Vals[1] + cat6Vals[2] + cat6Vals[3] + cat6Vals[4] + cat6Vals[5] + cat6Vals[6]);
    float cat6Week2 = (cat6Vals[7] + cat6Vals[8] + cat6Vals[9] + cat6Vals[10] + cat6Vals[11] + cat6Vals[12] + cat6Vals[13]);
    float cat6Total = (cat6Week1 + cat6Week2);
    float cat7Week1 = (cat7Vals[0] + cat7Vals[1] + cat7Vals[2] + cat7Vals[3] + cat7Vals[4] + cat7Vals[5] + cat7Vals[6]);
    float cat7Week2 = (cat7Vals[7] + cat7Vals[8] + cat7Vals[9] + cat7Vals[10] + cat7Vals[11] + cat7Vals[12] + cat7Vals[13]);
    float cat7Total = (cat7Week1 + cat7Week2);
    float cat8Week1 = (cat8Vals[0] + cat8Vals[1] + cat8Vals[2] + cat8Vals[3] + cat8Vals[4] + cat8Vals[5] + cat8Vals[6]);
    float cat8Week2 = (cat8Vals[7] + cat8Vals[8] + cat8Vals[9] + cat8Vals[10] + cat8Vals[11] + cat8Vals[12] + cat8Vals[13]);
    float cat8Total = (cat8Week1 + cat8Week2);
    float cat9Week1 = (cat9Vals[0] + cat9Vals[1] + cat9Vals[2] + cat9Vals[3] + cat9Vals[4] + cat9Vals[5] + cat9Vals[6]);
    float cat9Week2 = (cat9Vals[7] + cat9Vals[8] + cat9Vals[9] + cat9Vals[10] + cat9Vals[11] + cat9Vals[12] + cat9Vals[13]);
    float cat9Total = (cat9Week1 + cat9Week2);
    float cat10Week1 = (cat10Vals[0] + cat10Vals[1] + cat10Vals[2] + cat10Vals[3] + cat10Vals[4] + cat10Vals[5] + cat10Vals[6]);
    float cat10Week2 = (cat10Vals[7] + cat10Vals[8] + cat10Vals[9] + cat10Vals[10] + cat10Vals[11] + cat10Vals[12] + cat10Vals[13]);
    float cat10Total = (cat10Week1 + cat10Week2);

    //Previous biweekly additions are used to extract category average of _values_.
    float cat1Ave = (cat1Total/14);
    float cat2Ave = (cat2Total/14);
    float cat3Ave = (cat3Total/14);
    float cat4Ave = (cat4Total/14);
    float cat5Ave = (cat5Total/14);
    float cat6Ave = (cat6Total/14);
    float cat7Ave = (cat7Total/14);
    float cat8Ave = (cat8Total/14);
    float cat9Ave = (cat9Total/14);
    float cat10Ave = (cat10Total/14);

    //Weekly additions are used to extract separate weekly averages.
    //Week 1 block.
    float cat1Week1Ave = (cat1Week1/7);
    float cat2Week1Ave = (cat2Week1/7);
    float cat3Week1Ave = (cat3Week1/7);
    float cat4Week1Ave = (cat4Week1/7);
    float cat5Week1Ave = (cat5Week1/7);
    float cat6Week1Ave = (cat6Week1/7);
    float cat7Week1Ave = (cat7Week1/7);
    float cat8Week1Ave = (cat8Week1/7);
    float cat9Week1Ave = (cat9Week1/7);
    float cat10Week1Ave = (cat10Week1/7);
    //Week 2 block.
    float cat1Week2Ave = (cat1Week2/7);
    float cat2Week2Ave = (cat2Week2/7);
    float cat3Week2Ave = (cat3Week2/7);
    float cat4Week2Ave = (cat4Week2/7);
    float cat5Week2Ave = (cat5Week2/7);
    float cat6Week2Ave = (cat6Week2/7);
    float cat7Week2Ave = (cat7Week2/7);
    float cat8Week2Ave = (cat8Week2/7);
    float cat9Week2Ave = (cat9Week2/7);
    float cat10Week2Ave = (cat10Week2/7);


    //A realistic weekly budget _variable_ is declared.
    float weeklyBudget = 1050;
    //_If statements_ are used to check if categories have been initialised, utilising category totals.
    //If category totals are above 0, a comprehensive spending analysis is printed to screen.
    //Nesting _If else if statements_ define spending trends, budget status, and print to screen accordingly.
    //_Category 1_ block
    if (cat1Total > 0) {
        printf("%s spending analysis:\n TOTAL: %f.\n Week 1: %f. --- Week 2: %f.\n", cat1Name, cat1Total, cat1Week1, cat1Week2);
        if (cat1Week1 < weeklyBudget) {
            printf("Week 1 %s spendings are within budget.\n", cat1Name);
        } else if (cat1Week1 > weeklyBudget) {
            printf("Week 1 %s spendings are over budget.\n", cat1Name);
        }
        if (cat1Week2 < weeklyBudget) {
            printf("Week 2 %s spending is within budget.\n", cat1Name);
        } else if (cat1Week2 > weeklyBudget) {
            printf("Week 2 %s spending is over budget.\n", cat1Name);
        }

        printf("TOTAL daily average: %f.\n Week 1 daily average: %f. --- Week 2 daily average: %f.\n", cat1Ave, cat1Week1Ave, cat1Week2Ave);
        if (cat1Week1 < cat1Week2) {
            printf("Spending has seen an increase towards Week 2.\n\n");
        } else if (cat1Week1 == cat1Week2){
            printf("Spending has been exactly the same in Week 1 and Week 2.\n\n");
        } else if (cat1Week1 > cat1Week2){
            printf("Spending has seen a decrease towards Week 2.\n\n");
        }
    }

    //!!!!!!!!!!!!!Next follow each category block passing this code format.!!!!!!!!!!!!!
    //!!!!!!!!!!!!!Next coding section begins at line 443.!!!!!!!!!!!!!


    //_Category 2_ block
    if (cat2Total > 0) {
        printf("%s spending analysis:\n TOTAL: %f.\n Week 1: %f. --- Week 2: %f.\n", cat2Name, cat2Total, cat2Week1, cat2Week2);
        if (cat2Week1 < weeklyBudget) {
            printf("Week 1 %s spendings are within budget.\n", cat2Name);
        } else if (cat2Week1 > weeklyBudget) {
            printf("Week 1 %s spendings are over budget.\n", cat2Name);
        }
        if (cat2Week2 < weeklyBudget) {
            printf("Week 2 %s spending is within budget.\n", cat2Name);
        } else if (cat2Week2 > weeklyBudget) {
            printf("Week 2 %s spending is over budget.\n", cat2Name);
        }

        printf("TOTAL daily average: %f.\n Week 1 daily average: %f. --- Week 2 daily average: %f.\n", cat2Ave, cat2Week1Ave, cat2Week2Ave);
        if (cat2Week1 < cat2Week2) {
            printf("Spending has seen an increase towards Week 2.\n\n");
        } else if (cat2Week1 == cat2Week2){
            printf("Spending has been exactly the same in Week 1 and Week 2.\n\n");
        } else if (cat2Week1 > cat2Week2){
            printf("Spending has seen a decrease towards Week 2.\n\n");
        }
    }


    //_Category 3_ block
    if (cat3Total > 0) {
        printf("%s spending analysis:\n TOTAL: %f.\n Week 1: %f. --- Week 2: %f.\n", cat3Name, cat3Total, cat3Week1, cat3Week2);
        if (cat3Week1 < weeklyBudget) {
            printf("Week 1 %s spendings are within budget.\n", cat3Name);
        } else if (cat3Week1 > weeklyBudget) {
            printf("Week 1 %s spendings are over budget.\n", cat3Name);
        }
        if (cat3Week2 < weeklyBudget) {
            printf("Week 2 %s spending is within budget.\n", cat3Name);
        } else if (cat3Week2 > weeklyBudget) {
            printf("Week 2 %s spending is over budget.\n", cat3Name);
        }

        printf("TOTAL daily average: %f.\n Week 1 daily average: %f. --- Week 2 daily average: %f.\n", cat3Ave, cat3Week1Ave, cat3Week2Ave);
        if (cat3Week1 < cat3Week2) {
            printf("Spending has seen an increase towards Week 2.\n\n");
        } else if (cat3Week1 == cat3Week2){
            printf("Spending has been exactly the same in Week 1 and Week 2.\n\n");
        } else if (cat3Week1 > cat3Week2){
            printf("Spending has seen a decrease towards Week 2.\n\n");
        }
    }

    //_Category 4_ block
    if (cat4Total > 0) {
        printf("%s spending analysis:\n TOTAL: %f.\n Week 1: %f. --- Week 2: %f.\n", cat4Name, cat4Total, cat4Week1, cat4Week2);
        if (cat4Week1 < weeklyBudget) {
            printf("Week 1 %s spendings are within budget.\n", cat4Name);
        } else if (cat4Week1 > weeklyBudget) {
            printf("Week 1 %s spendings are over budget.\n", cat4Name);
        }
        if (cat4Week2 < weeklyBudget) {
            printf("Week 2 %s spending is within budget.\n", cat4Name);
        } else if (cat4Week2 > weeklyBudget) {
            printf("Week 2 %s spending is over budget.\n", cat4Name);
        }

        printf("TOTAL daily average: %f.\n Week 1 daily average: %f. --- Week 2 daily average: %f.\n", cat4Ave, cat4Week1Ave, cat4Week2Ave);
        if (cat4Week1 < cat4Week2) {
            printf("Spending has seen an increase towards Week 2.\n\n");
        } else if (cat4Week1 == cat4Week2){
            printf("Spending has been exactly the same in Week 1 and Week 2.\n\n");
        } else if (cat4Week1 > cat4Week2){
            printf("Spending has seen a decrease towards Week 2.\n\n");
        }
    }


    //_Category 5_ block
    if (cat5Total > 0) {
        printf("%s spending analysis:\n TOTAL: %f.\n Week 1: %f. --- Week 2: %f.\n", cat5Name, cat5Total, cat5Week1, cat5Week2);
        if (cat5Week1 < weeklyBudget) {
            printf("Week 1 %s spendings are within budget.\n", cat5Name);
        } else if (cat5Week1 > weeklyBudget) {
            printf("Week 1 %s spendings are over budget.\n", cat5Name);
        }
        if (cat5Week2 < weeklyBudget) {
            printf("Week 2 %s spending is within budget.\n", cat5Name);
        } else if (cat5Week2 > weeklyBudget) {
            printf("Week 2 %s spending is over budget.\n", cat5Name);
        }

        printf("TOTAL daily average: %f.\n Week 1 daily average: %f. --- Week 2 daily average: %f.\n", cat5Ave, cat5Week1Ave, cat5Week2Ave);
        if (cat5Week1 < cat5Week2) {
            printf("Spending has seen an increase towards Week 2.\n\n");
        } else if (cat5Week1 == cat5Week2){
            printf("Spending has been exactly the same in Week 1 and Week 2.\n\n");
        } else if (cat5Week1 > cat5Week2){
            printf("Spending has seen a decrease towards Week 2.\n\n");
        }
    }


    //_Category 6_ block
    if (cat6Total > 0) {
        printf("%s spending analysis:\n TOTAL: %f.\n Week 1: %f. --- Week 2: %f.\n", cat6Name, cat6Total, cat6Week1, cat6Week2);
        if (cat6Week1 < weeklyBudget) {
            printf("Week 1 %s spendings are within budget.\n", cat6Name);
        } else if (cat6Week1 > weeklyBudget) {
            printf("Week 1 %s spendings are over budget.\n", cat6Name);
        }
        if (cat6Week2 < weeklyBudget) {
            printf("Week 2 %s spending is within budget.\n", cat6Name);
        } else if (cat6Week2 > weeklyBudget) {
            printf("Week 2 %s spending is over budget.\n", cat6Name);
        }

        printf("TOTAL daily average: %f.\n Week 1 daily average: %f. --- Week 2 daily average: %f.\n", cat6Ave, cat6Week1Ave, cat6Week2Ave);
        if (cat6Week1 < cat6Week2) {
            printf("Spending has seen an increase towards Week 2.\n\n");
        } else if (cat6Week1 == cat6Week2){
            printf("Spending has been exactly the same in Week 1 and Week 2.\n\n");
        } else if (cat6Week1 > cat6Week2){
            printf("Spending has seen a decrease towards Week 2.\n\n");
        }
    }

    //_Category 7_ block
    if (cat7Total > 0) {
        printf("%s spending analysis:\n TOTAL: %f.\n Week 1: %f. --- Week 2: %f.\n", cat7Name, cat7Total, cat7Week1, cat7Week2);
        if (cat7Week1 < weeklyBudget) {
            printf("Week 1 %s spendings are within budget.\n", cat7Name);
        } else if (cat7Week1 > weeklyBudget) {
            printf("Week 1 %s spendings are over budget.\n", cat7Name);
        }
        if (cat7Week2 < weeklyBudget) {
            printf("Week 2 %s spending is within budget.\n", cat7Name);
        } else if (cat7Week2 > weeklyBudget) {
            printf("Week 2 %s spending is over budget.\n", cat7Name);
        }

        printf("TOTAL daily average: %f.\n Week 1 daily average: %f. --- Week 2 daily average: %f.\n", cat7Ave, cat7Week1Ave, cat7Week2Ave);
        if (cat7Week1 < cat7Week2) {
            printf("Spending has seen an increase towards Week 2.\n\n");
        } else if (cat7Week1 == cat7Week2){
            printf("Spending has been exactly the same in Week 1 and Week 2.\n\n");
        } else if (cat7Week1 > cat7Week2){
            printf("Spending has seen a decrease towards Week 2.\n\n");
        }
    }


    //_Category 8_ block
    if (cat8Total > 0) {
        printf("%s spending analysis:\n TOTAL: %f.\n Week 1: %f. --- Week 2: %f.\n", cat8Name, cat8Total, cat8Week1, cat8Week2);
        if (cat8Week1 < weeklyBudget) {
            printf("Week 1 %s spendings are within budget.\n", cat8Name);
        } else if (cat8Week1 > weeklyBudget) {
            printf("Week 1 %s spendings are over budget.\n", cat8Name);
        }
        if (cat8Week2 < weeklyBudget) {
            printf("Week 2 %s spending is within budget.\n", cat8Name);
        } else if (cat8Week2 > weeklyBudget) {
            printf("Week 2 %s spending is over budget.\n", cat8Name);
        }

        printf("TOTAL daily average: %f.\n Week 1 daily average: %f. --- Week 2 daily average: %f.\n", cat8Ave, cat8Week1Ave, cat8Week2Ave);
        if (cat8Week1 < cat8Week2) {
            printf("Spending has seen an increase towards Week 2.\n\n");
        } else if (cat8Week1 == cat8Week2){
            printf("Spending has been exactly the same in Week 1 and Week 2.\n\n");
        } else if (cat8Week1 > cat8Week2){
            printf("Spending has seen a decrease towards Week 2.\n\n");
        }
    }


    //_Category 9_ block
    if (cat9Total > 0) {
        printf("%s spending analysis:\n TOTAL: %f.\n Week 1: %f. --- Week 2: %f.\n", cat9Name, cat9Total, cat9Week1, cat9Week2);
        if (cat9Week1 < weeklyBudget) {
            printf("Week 1 %s spendings are within budget.\n", cat9Name);
        } else if (cat9Week1 > weeklyBudget) {
            printf("Week 1 %s spendings are over budget.\n", cat9Name);
        }
        if (cat9Week2 < weeklyBudget) {
            printf("Week 2 %s spending is within budget.\n", cat9Name);
        } else if (cat9Week2 > weeklyBudget) {
            printf("Week 2 %s spending is over budget.\n", cat9Name);
        }

        printf("TOTAL daily average: %f.\n Week 1 daily average: %f. --- Week 2 daily average: %f.\n", cat9Ave, cat9Week1Ave, cat9Week2Ave);
        if (cat9Week1 < cat9Week2) {
            printf("Spending has seen an increase towards Week 2.\n\n");
        } else if (cat9Week1 == cat9Week2){
            printf("Spending has been exactly the same in Week 1 and Week 2.\n\n");
        } else if (cat9Week1 > cat9Week2){
            printf("Spending has seen a decrease towards Week 2.\n\n");
        }
    }


    //_Category 10_ block
    if (cat10Total > 0) {
        printf("%s spending analysis:\n TOTAL: %f.\n Week 1: %f. --- Week 2: %f.\n", cat10Name, cat10Total, cat10Week1, cat10Week2);
        if (cat10Week1 < weeklyBudget) {
            printf("Week 1 %s spendings are within budget.\n", cat10Name);
        } else if (cat10Week1 > weeklyBudget) {
            printf("Week 1 %s spendings are over budget.\n", cat10Name);
        }
        if (cat10Week2 < weeklyBudget) {
            printf("Week 2 %s spending is within budget.\n", cat10Name);
        } else if (cat10Week2 > weeklyBudget) {
            printf("Week 2 %s spending is over budget.\n", cat10Name);
        }

        printf("TOTAL daily average: %f.\n Week 1 daily average: %f. --- Week 2 daily average: %f.\n", cat10Ave, cat10Week1Ave, cat10Week2Ave);
        if (cat10Week1 < cat10Week2) {
            printf("Spending has seen an increase towards Week 2.\n\n");
        } else if (cat10Week1 == cat10Week2){
            printf("Spending has been exactly the same in Week 1 and Week 2.\n\n");
        } else if (cat10Week1 > cat10Week2){
            printf("Spending has seen a decrease towards Week 2.\n\n");
        }
    }


    //Absolute totals adding up all categories totals are calculated. Likewise for an absolute total average.
    float grandTotale = (cat1Total + cat2Total + cat3Total + cat4Total + cat5Total + cat6Total + cat7Total + cat8Total + cat9Total + cat10Total);
    float grandTotalAve = (grandTotale/10);
    //Weekly absolute totals and averages are calculated too.
    float week1Totale = (cat1Week1 + cat2Week1 + cat3Week1 + cat4Week1 + cat5Week1 + cat6Week1 + cat7Week1 + cat8Week1 + cat9Week1 + cat10Week1);
    float week1GrandAve = ((cat1Week1Ave + cat2Week1Ave + cat3Week1Ave + cat4Week1Ave + cat5Week1Ave + cat6Week1Ave + cat7Week1Ave + cat8Week1Ave + cat9Week1Ave + cat10Week1Ave)/10);
    float week2Totale = (cat1Week2 + cat2Week2 + cat3Week2 + cat4Week2 + cat5Week2 + cat6Week2 + cat7Week2 + cat8Week2 + cat9Week2 + cat10Week2);
    float week2GrandAve = ((cat1Week2Ave + cat2Week1Ave + cat3Week2Ave + cat4Week2Ave + cat5Week2Ave + cat6Week2Ave + cat7Week2Ave + cat8Week2Ave + cat9Week2Ave + cat10Week2Ave)/10);
            //These absolute amounts are printed to screen.
            printf("\n=========GRAND TOTAL: %f.\n WEEK 1 TOTAL: %f. --- WEEK 2 TOTAL: %f.\n", grandTotale, week1Totale, week2Totale);
            printf("=========GRAND DAILY AVERAGE: %f.\n WEEK 1 TOTAL DAILY AVERAGE: %f. --- WEEK 2 TOTAL DAILY AVERAGE: %f.\n", grandTotalAve, week1GrandAve, week2GrandAve);




}