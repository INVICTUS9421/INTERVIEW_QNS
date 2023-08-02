#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n;
    printf("enter no of elements:");
    scanf("%d",&n);
    int* value = (int*)malloc(n*sizeof(int));
    printf("enter values:\n");
    for(i=0;i<n;i++)
        scanf("%d",&value[i]);
    for(i=0;i<n;i++)
    {
        if(value[i]==0)
            value[i] = 1;
    }
    printf("the result is:");
    for(i=0;i<n;i++)
        printf("%d",value[i]);
}