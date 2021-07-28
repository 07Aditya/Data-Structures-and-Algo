#include<iostream>
using namespace std;

int main()
{
    int row,col;
    cin>>col;

    for(int i=1;i<=3;i++)
    {
        for(int j=1;j<=col;j++)
        {
            if((i+j)%4==0||j%2==0&&i==2)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }

        }
        cout<<endl;
    }
}
