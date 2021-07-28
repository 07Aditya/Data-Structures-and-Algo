#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
//left!
    for(int i=1;i<=n;i++)
    {

          for(int k=1;k<=i;k++)

           {
             cout<<"*";

           }
           int space=2*n-2*i;
           for(int k=1;k<=space;k++)
           {
               cout<<" ";
           }

        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }

      cout<<endl;

    }
//Down
 for(int i=n;i>=1;i--)
    {
        //cout<<"AO";
          for(int k=i;k>=1;k--)

           {
             cout<<"*";

           }
           int space=2*n-2*i;
           for(int k=1;k<=space;k++)
           {
               cout<<" ";
           }

        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }

      cout<<endl;

    }




}

