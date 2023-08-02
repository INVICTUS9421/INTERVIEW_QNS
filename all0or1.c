//program to check if all digits can be either
//0 or 1 by changing only one digit
#include<stdio.h>
int main()
{
        int n,i;
        printf("enter no of bits:");
        scanf("%d",&n);
        printf("enter value\n");
        char val[n];
        scanf("%s",val);
        i = 0;
        int one=0,zero=0;
        while(val[i]!='\0')
        {
                if(val[i]=='0')
                {
                        zero++;
                        i++;
                }
                else
                {
                        one++;
                        i++;
                }
        }
        if(zero==1 || one == 1)
                printf("YES!!!!");
        else
                printf("NO!!!");
}
