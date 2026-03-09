#include <stdio.h>

int main()
{
    int money[5];
    int total = 0;
    int limit = 100;   // daily budget limit

    printf("Canteen Spending Tracker (Mon - Fri)\n");

    // Taking input for 5 days
    for(int i = 0; i < 5; i++)
    {
        printf("Enter money spent on day %d: ", i + 1);
        scanf("%d", &money[i]);
        total = total + money[i];
    }

    // Display total spending
    printf("\nTotal money spent from Monday to Friday: %d Rs\n", total);

    // Budget alert check
    printf("\n--- Budget Alert ---\n");
    for(int i = 0; i < 5; i++)
    {
        if(money[i] > limit)
        {
            printf("You spent %d Rs more than your %d Rs budget on day %d\n",
                   money[i] - limit, limit, i + 1);
        }
    }

    printf("\nTry to manage your canteen expenses better next week!\n");

    return 0;
}