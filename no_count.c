/* A Basic code to 'count the occurances of numbers' in a given string */
//INPUT: string
//OUTPUT: count occurance of numbers

#include <stdio.h>
#include <string.h>
int i, j;
int main()
{
    int count;
    printf("\nEnter no of inputs:");
    scanf("%d", &count);
    char str[count][30];
    for (i = 0; i < count; i++)
        scanf(" %s", str[i]);

    int ans[10];
    for (i = 0; i < 10; i++)
        ans[i] = 0;

    for (i = 0; i < count; i++)
    {
        for (j = 0; j < strlen(str[i]); j++)
        {
            if (str[i][j] == '0')
                ans[0]++;
            else if (str[i][j] == '1')
                ans[1]++;
            else if (str[i][j] == '2')
                ans[2]++;
            else if (str[i][j] == '3')
                ans[3]++;
            else if (str[i][j] == '4')
                ans[4]++;
            else if (str[i][j] == '5')
                ans[5]++;
            else if (str[i][j] == '6')
                ans[6]++;
            else if (str[i][j] == '7')
                ans[7]++;
            else if (str[i][j] == '8')
                ans[8]++;
            else if (str[i][j] == '9')
                ans[9]++;
        }
    }
    for (i = 0; i < 10; i++)
    {
        printf("\ncount of %d : %d", i, ans[i]);
    }
}
