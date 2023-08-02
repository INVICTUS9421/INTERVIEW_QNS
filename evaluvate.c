#include <stdio.h>
int main()
{
    printf("\nenter no of questions:");
    int qno = 0, i, j;
    scanf("%d", &qno);
    printf("%d", qno);
    int ans[qno];
    printf("\nenter ans to questions\n");
    for (i = 0; i < qno; i++)
        scanf(" %d", &ans[i]);

    int stdcount;
    printf("\nenter no of students:");
    scanf("%d", &stdcount);
    int mark[stdcount][qno];

    int correct = 0;
    for (i = 0; i < stdcount; i++)
    {
        for (j = 0; j < qno; j++)
            mark[i][j] = -1;
    }
    printf("\nenter answers of students");
    for (i = 0; i < stdcount; i++)
    {
        for (j = 0; j < qno; j++)
        {
            scanf("%d", &mark[i][j]);
        }
    }
    printf("\nanswers");
    for (i = 0; i < stdcount; i++)
    {
        printf("\nstudent:%d", i + 1);
        for (j = 0; j < qno; j++)
        {
            if (mark[i][j] == ans[j])
                correct++;
            else
            {
                printf("\nWrong:%d", j + 1);
            }
        }
        printf("\ncorrect:%d", correct);
        correct = 0;
        printf("\n\n");
    }
}