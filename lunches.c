#include <stdio.h>
int main()
{
    int no_of_lunches = 0, schools = 0, i, j;
    printf("\nEnter no of available lunches:");
    scanf("%d", &no_of_lunches);
    printf("\nEnter no of available schools:");
    scanf("%d", &schools);
    int values[schools];
    int supply[schools];
    for (i = 0; i < schools; i++)
        supply[i] = -1;
    printf("\nCorresponding lunches required\n");
    for (i = 0; i < schools; i++)
        scanf("%d", &values[i]);
    for (i = 0; i < schools; i++)
    {
        for (j = 0; j < schools - i - 1; j++)
        {
            if (values[j] > values[j + 1])
            {
                int temp = values[j];
                values[j] = values[j + 1];
                values[j] = temp;
            }
        }
    }
    int k = 0;
    for (i = 0; i < schools && no_of_lunches >= 0; i++)
    {
        if (values[i] <= no_of_lunches)
        {
            supply[k] = values[i];
            k++;
            no_of_lunches -= values[i];
        }
    }
    for (i = 0; i < k; i++)
        printf("%d\t", supply[i]);
}