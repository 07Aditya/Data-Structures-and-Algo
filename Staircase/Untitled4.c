#include<stdio.h>
int main()
{
    int i,p=0,s=0,j,n,k;
    printf("num:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        s=n-(i+1);
        for(k=0;k<s;k++)
        {
            printf(" ");
        }

        p=i+1;
        for(j=0;j<p;j++)
        {
            printf("#");

        }
        printf("\n");

     }

}



