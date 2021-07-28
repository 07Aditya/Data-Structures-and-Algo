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

    int row_start=0,row_end=r-1,col_start=0,col_end=c-1;
    {
        while(row_start<=row_end && col_start<=col_end )
        {
            for(int i=col_start;i<=col_end;i++)
            {
                cout<<a[row_start][i]<<" ";
            }
            row_start+=1;

            for(int i=row_start;i<=row_end;i++)
            {
                cout<<a[i][col_end]<<" ";
            }
            col_end--;
            for(int i=col_end;i>=col_start;i--)
            {
                cout<<a[row_end][i]<<" ";
            }

            row_end--;
            for(int i=row_end;i>=row_start;i--)
            {
                cout<<a[i][col_start]<<" ";
            }
            col_start++;


        }
    }
}
