#include <stdio.h>

int main(){
	int A[100],k,t,n,p,i,j,m;
	printf("Enter testcases:");
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
	    int sum=0,num=0;
		printf("Enter total number of elements in array and number of integers to choose:");
		scanf("%d%d",&n,&k);
		printf("Enter an array:");
		for(j=0;j<n;j++)
		{
			scanf("%d",&A[j]);
		}

        for(m=0;m<k;m++)
		{
			for( p=1;p<n;p++)
			{
			    num=A[0];
			    if(A[0]==A[p])
                    {
                        A[0]=num+A[p];
                    }
				else if(A[0]<A[p])
				{

					A[0]=A[p];
					//printf("%d\n",A[0]);
				}
				A[p]=0;

			}
			sum=sum+A[0];
            A[0]=num;

		}
		printf("%d\n",sum);
	}

}
