#include<bits/stdc++.h>
using namespace std;

int first(int n,int i,int a[],int k)
{
    //int factor=0;
    if(a[i]==k)
        return i;

    int occ = first(n,i+1,a,k);
    return occ;
}
int last(int n,int i,int a[],int k)
{
    //int factor=0
    int m=n;
    if(a[n]==k)
        return n;

    int occ = first(n-1,i,a,k);
    return m-occ;
}

int main()
{
    int n;
    cin>>n;
     int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;
    int i=0;

   cout<<first(n,i,a,k);
   cout<<endl;
   cout<<last(n,i,a,k);

}
