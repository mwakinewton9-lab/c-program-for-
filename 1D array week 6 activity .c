
#include <stdio.h>

int main()
{
    int i;
    float revenue[7];
    float total = 0, average;

    // Input daily revenue
    for(i = 0; i < 7; i++)
    {
        printf("Enter revenue for day %d: ", i + 1);
        scanf("%f", &revenue[i]);

        total = total + revenue[i];
    }

    // Calculate average
    average = total / 7;

    // Display results
    printf("\nTotal weekly revenue = %.2f", total);
    printf("\nAverage daily revenue = %.2f", average);

    return 0;
}
