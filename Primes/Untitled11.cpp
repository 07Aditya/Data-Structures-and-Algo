#include<iostream>
using namespace std;

int main()
{
    int num1,num2,flag=0;
    cin>>num1>>num2;

    for(int i=num1;i<=num2;i++)

    {
        if(i==0||i==1)
            continue;

        int flag=0;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
            {

                flag=1;
                break;
            }
        }

        if(flag==0)
        {
            cout<<i<<" ";
        }

    }

}
