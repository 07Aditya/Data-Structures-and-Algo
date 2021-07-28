#include<bits/stdc++.h>
using namespace std;
int positive(int n,int a[],int mx)
{
 for(int i=1;i<mx;i++)
    {
        for(int j =1;j<=n;j++)
        {
            {
            if(i!=a[j])
            {
                return i;
            }
            }
        }

    }
}

int main()
{
    int n,mx,f;
    cin>>n;
    int a[n];
    for(int i =1;i<=n;i++)
    {
        cin>>a[i];
    }
    for(int i=1;i<=n;i++)
    {
        mx=max(f,a[i]);
        f=a[i];
    }
   cout<< positive(n,a,mx);

}
