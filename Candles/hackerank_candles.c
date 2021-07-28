#include<stdio.h>

int main(){
    int A[1000000],n,sum=0,count=0,temp,num=0;
    printf("");
    scanf("%d",&n);
    printf("");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }
    num=A[0];
    for(int i=1;i<n;i++)
    {
        if(A[0]<=A[i])
        {
            A[0]=A[i];

        }

    }
    sum=sum+A[0];
    A[0]=num;
    //printf("A[0]:%d",A[0]);
    //printf("Sum=%d\n",sum);
    for(int j=0;j<n;j++)
    {
        if(sum==A[j])
        {
            count=count+1;
        }

    }
    printf("%d",count);

}
