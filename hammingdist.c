#include <stdio.h>
int i, j;
void convert_to_bin(int no, int bin[])
{
    i = 0;
    while (no > 0)
    {
        bin[i] = no % 2;
        no = no / 2;
        i++;
    }
}
int main()
{
    int no1, no2;
    int bin1[7], bin2[7];
    for (i = 0; i < 7; i++)
    {
        bin1[i] = -1;
        bin2[i] = -1;
    }
    printf("\nEnter no1(0-100):");
    scanf("%d", &no1);
    printf("\nEnter no2(0-100):");
    scanf("%d", &no2);

    convert_to_bin(no1, bin1);
    convert_to_bin(no2, bin2);

    int distance = 0;
    i = 0, j = 0;
    while (bin1[i] != -1 && bin2[j] != -1)
    {
        if (bin1[i] != bin2[j])
        {
            distance++;
            i++;
            j++;
        }
        else
        {
            i++;
            j++;
        }
    }
    if (bin1[i] == -1)
        distance += (j - i);
    else if (bin2[j] == -1)
        distance += (i - j);

    printf("\nhamming distance:%d", distance);
}