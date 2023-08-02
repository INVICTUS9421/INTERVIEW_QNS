#include<stdio.h>
int main()
{
    int i,n;
    printf("enter no of elements:");
    scanf("%d",&n);
    int arr[n];
    printf("enter array values!!!");
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
    for(i=0;i<n;i++)
    {
        if(arr[i]==arr[i+1])
        {
            printf("found");
            int j;
            for(j=i;j<n-2;j++)
            {
                arr[j] = arr[j+1];
            }
        }    
    }
    for(i=0;i<n;i++)
        printf("%d",arr[i]);
}