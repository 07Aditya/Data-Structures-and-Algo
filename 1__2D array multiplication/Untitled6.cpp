#include<bits/stdc++.h>
using namespace std;

int main()
{
    int r,c;
    cin>>r>>c;
    int a[r][c];


    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
             cin>>a[i][j];
        }
    }
    int col;
    cin>>col;
    int b[c][col];


    for(int i=0;i<c;i++)
    {
        for(int j=0;j<col;j++)
        {
             cin>>b[i][j];
        }
    }
    int d[r][col],ans=0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<col;j++)
        {
            for(int k=0;k<c;k++)
        {
            d[i][j] +=a[i][k]*b[k][j];
            // cout<<d[i][k]<<" ";
        }
        cout<<endl;
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<d[i][j]<<" ";
        }
    }


}
