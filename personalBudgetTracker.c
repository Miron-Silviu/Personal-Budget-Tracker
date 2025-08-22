#include <stdio.h>
int main()
{
    // Declare Variables
    int ExpenseN;
    char cat1[50], cat2[50], cat3[50];
    float week1_category1, week1_category2, week1_category3;
    float week2_category1, week2_category2, week2_category3;
    float total1, total2;
    printf("Enter number of expense categories: ");
    scanf("%d", &ExpenseN);

    // Condition to choose between 1 and 3
    if (ExpenseN < 1 || ExpenseN > 3)
    {
        printf("Please choose between 1 an 3");
        return 1;
    }
    printf("Enter name of category 1:");
    scanf("%s", cat1);
    printf("Enter name of category 2:");
    scanf("%s", cat2);
    printf("Enter name of category 3:");
    scanf("%s", cat3);

    // Week one
    printf("-------------WEEK ONE EXPENSE--------------------\n");
    printf("Enter expense for week 1 \n");
    printf(" Enter expense for %s : £ ", cat1);
    scanf("%f", &week1_category1);
    printf(" Enter expense for %s : £ ", cat2);
    scanf("%f", &week1_category2);
    printf(" Enter expense for %s : £ ", cat3);
    scanf("%f", &week1_category3);

    // Week two
    printf("-------------WEEK TWO EXPENSE--------------------\n");
    printf("Enter expense for week 2 \n");
    printf(" Enter expense for %s : £ ", cat1);
    scanf("%f", &week2_category1);
    printf(" Enter expense for %s : £ ", cat2);
    scanf("%f", &week2_category2);
    printf(" Enter expense for %s : £ ", cat3);
    scanf("%f", &week2_category3);

    // Calculate Total
    total1 = week1_category1 + week1_category2 + week1_category3;
    total2 = week2_category1 + week2_category2 + week2_category3;

    // Print detailed expense
    printf("\n Detailed Expense Breakdown:\n");
    printf("+-----------------------------------------+\n");
    printf("| %-20s | %-10s| %-10s| %-15s |\n", "Category", "Week1", "Week2", "Change");
    printf("+-----------------------------------------+\n");

    // Calculate Expense One
    if (ExpenseN >= 1)
    {
        printf("|%-20s|£%-9.2f|£%-9.2f| ", cat1, week1_category1, week1_category2);

        if (week2_category1 > week1_category1)
        {
            printf(" ⬆️ Increased       |\n");
        }
        else if (week2_category1 < week1_category1)
        {
            printf(" ⬇️ Decreased       |\n");
        }
        else
        {
            printf(" ➡️ No Change       |\n");
        }
    }

    // Calculate Expense Two
    if (ExpenseN >= 2)
    {
        printf("|%-20s|£%-9.2f|£%-9.2f|", cat2, week1_category2, week2_category2);

        if (week2_category2 > week1_category2)
        {
            printf(" ⬆️ Increased       |\n");
        }
        else if (week2_category2 < week1_category2)
        {
            printf(" ⬇️ Decreased       |\n");
        }
        else
        {
            printf(" ➡️ No Change       |\n");
        }
    }

    // Calculate Expense Three
    if (ExpenseN >= 3)
    {
        printf("|%-20s|£%-9.2f|£%-9.2f|", cat3, week1_category3, week2_category3);

        if (week2_category3 > week1_category3)
        {
            printf(" ⬆️ Increased       |\n");
        }
        else if (week2_category3 < week1_category3)
        {
            printf(" ⬇️ Decreased       |\n");
        }
        else
        {
            printf(" ➡️ No Change       |\n");
        }
    }

    // tble header
    printf("+------------------------------------------------------+\n");
    printf("| %-20s | £%-9.2f | £%-9.2f |            \n", "Total", total1, total2);
    printf("+------------------------------------------------------+\n");

    // Print summary
    printf("\n Summary: \n");
    if (total2 > total1)
    {
        printf("\033[1;31mIncreased: Total Spending by £%.2f.\033[0m\n", total2 - total1);
    }
    else if (total2 < total1)
    {
        printf("\033[1;32mDecreased: Total Spending by £%.2f.\033[0m\n", total1 - total2);
    }
    else
    {
        printf("\033[1;33mSpending: Remained the same.\033[0m\n");
    }

    return 0;
}
