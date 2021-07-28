#include<bits/stdc++.h>
using namespace std;

int smallest(int a[],int n)
{
    for(int i =1;i<=n;i++)
    {
        for(int j =i+1;j <=n;j++)
        {
            if(a[i]==a[j])
            {
                return i;

            }

        }

    }

}

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i =1;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<smallest(a,n);
}
