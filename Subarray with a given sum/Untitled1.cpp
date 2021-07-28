#include<bits/stdc++.h>
using namespace std;

void summ(int n,int a[],int sum)
{
 for(int i=1;i<=n;i++)
    {

        int c=0;
        //int m=0;
        c=c+a[i];
        for(int j =i+1;j<=n-1;j++)
        {
            c+=a[j];
           // return c;
            if(c==sum && c<=sum)
            {
                cout<<i<<" "<<j;
            }
        }

    }

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =1;i<=n;i++)
    {
        cin>>a[i];
    }
    int sum;
    cin>>sum;

   summ(n,a,sum);



}
