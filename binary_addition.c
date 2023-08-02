#include <stdio.h>
void binadd(int a[8], int b[8])
{
    int sum[8], carry = 0, i;
    for (i = 8 - 1; i >= 0; i--)
    {
        sum[i] = (a[i] + b[i] + carry) % 2;
        carry = (a[i] + b[i] + carry) / 2;
    }
    for (i = 0; i < 8; i++)
        printf("%d", sum[i]);
}
int main()
{
    int a[8] = {1, 1, 1, 1, 0, 1, 0, 1};
    int b[8] = {0, 1, 0, 1, 1, 1, 1, 1};
    binadd(a, b);
}