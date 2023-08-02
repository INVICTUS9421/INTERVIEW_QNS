#include <stdio.h>
struct student
{
    int id, mark, group;
    char name[20];
};
int main()
{
    int g1[11], count = 0, i = 0;
    printf("Enter total no of students:");
    scanf("%d", &count);
    struct student st[count];
    for (i = 0; i < count; i++)
    {
        printf("\nEnter name of student:");
        scanf("%s", &st[i].name);
        printf("\nEnter id of student:");
        scanf("%d", &st[i].id);
        printf("\nEnter mark of student:");
        scanf("%d", &st[i].mark);

        if (st[i].mark >= 0 && st[i].mark <= 9)
            st[i].group = 1;
        else if (st[i].mark >= 10 && st[i].mark <= 19)
            st[i].group = 2;
        else if (st[i].mark >= 20 && st[i].mark <= 29)
            st[i].group = 3;
        else if (st[i].mark >= 30 && st[i].mark <= 39)
            st[i].group = 4;
        else if (st[i].mark >= 40 && st[i].mark <= 49)
            st[i].group = 5;
        else if (st[i].mark >= 50 && st[i].mark <= 59)
            st[i].group = 6;
        else if (st[i].mark >= 60 && st[i].mark <= 69)
            st[i].group = 7;
        else if (st[i].mark >= 70 && st[i].mark <= 79)
            st[i].group = 8;
        else if (st[i].mark >= 80 && st[i].mark <= 89)
            st[i].group = 9;
        else if (st[i].mark >= 90 && st[i].mark <= 99)
            st[i].group = 10;
        else if (st[i].mark == 100)
            st[i].group = 11;
    }
    /*for (i = 0; i < count; i++)
    {
        printf("\nname:%s", st[i].name);
        printf("\nid:%d", st[i].id);
        printf("\nmark:%d", st[i].mark);
        printf("\ngroup:%d", st[i].group);
    }*/
    int c = 0, j;
    for (i = 1; i <= 11; i++) // group
    {
        for (j = 0; j < count; j++) // student
        {
            if (st[j].group == i)
                c++;
        }
        printf("\nGROUP %d :", i);
        printf("%d", c);
        c = 0;
    }
}