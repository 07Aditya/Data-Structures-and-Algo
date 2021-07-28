#include<stdio.h>

int main()
{
    int n,A[1000];
    printf("");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }


    for(int k=0;k<n;k++)
    {
        if(A[k]>=38)
        {
            for(int j=A[k];j<1000;j++)
            {
                if(j%5==0)
                {

                    if(j-A[k]<3)
                    {
                        printf("%d\n",j);
                        break;
                    }
                    else
                    {
                        printf("%d\n",A[k]);
                        break;
                    }
                }
            }
        }
        else
        {
            printf("%d\n",A[k]);
        }


    }

}
