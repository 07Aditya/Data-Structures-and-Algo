#include<bits/stdc++.h>
using namespace std;

int binarysearch(int n,int A[],int k)
{
    int s=0;
    int e=n;
    while(e>=s)
    {
        int mid=(s+e)/2;
        if(A[mid]==k)
        {
           return mid;
        }
        else if(A[mid]>k)
        {
            e=e-1;
        }
        else
        {
            s=s+1;
        }


    }
     return -1;

}
int main()
{
    int n;
    cin>>n;

    int A[n];

    for(int i=0;i<n;i++)
    {
        cin>>A[i];
    }
    int k;
    cin>>k;

    cout<<binarysearch( n,A, k)<<endl;

}
