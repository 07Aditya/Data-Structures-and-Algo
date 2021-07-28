#include<iostream>
using namespace std;

int main()
{
    int num,flag=0;
    cin>>num;

    for(int i=2;i<num;i++)
    {
         if(num%i==0)
        {
            cout<<"not";
            flag=1;
            break;
        }

    }

if(flag==0)
{
    cout<<"prime";
}


}
