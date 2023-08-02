#include <stdio.h>
int possibility(int steps)
{
    if (steps == 0)
        return 0;
    else if (steps == 1)
        return 1;
    else
        return (possibility(steps - 1) + possibility(steps - 2));
}
int main()
{
    int steps = 0;
    printf("\nEnter no of steps:");
    scanf("%d", &steps);
    printf("\npossiblities:%d", possibility(steps + 1));
}