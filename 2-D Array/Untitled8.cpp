#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(int k=i;k>=1;k--)

        {
            //int num=i;
             cout<<"*";



        }
         for( int k=2;k<=i;k++)
         {


             cout<<"*";

         }

        cout<<endl;
    }
    /////////////////////////////////


    for(int i=n;i>=1;i--)
    {
        for(int j=1;j<=(n-i);j++)
        {
            cout<<" ";
        }
        for(int k=1;k<=i;k++)

        {
            //int num=i;
             cout<<"*";



        }
         for( int k=2;k<=i;k++)
         {


             cout<<"*";

         }

        cout<<endl;
    }



}




