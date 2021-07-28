#include<stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    long long int A[100],sum=0,n,i,j;
    printf("");
    scanf("%lld",&n);
    for(i=0;i<n;i++)
    {
        scanf("%lld",&A[i]);
    }

    for(j=0;j<n;j++)
    {
        sum=sum+A[j];
    }
    printf("%lld",sum);
}
