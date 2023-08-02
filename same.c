#include<stdio.h>
int main()
{
        int n,i;
        printf("enter no of bits:");
        scanf("%d",&n);
        printf("enter value\n");
        int val[n];
        for(i=0;i<n;i++)
                scanf("%d",&val[i]);
        i = 0;
        int one=0,zero=0;
        while(i<n)
        {
                if(val[i]==0)
                {
                        zero++;
                }
                else
                {
                        one++;
                }
        }
        if(zero==1 || one == 1)
                printf("YESSSSSSSSSS!!!!");
        else
                printf("NONONONONONONO!!!");
}