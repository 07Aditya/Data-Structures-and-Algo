#include<bits/stdc++.h>
using namespace std;


int main()
{
    string str;
    cin>>str;

    int csum=0,mxsum=0;
    string cstr,mxstr;

    for(int i=0;i<str.size();i++)
    {
        for(int j=0;j<str.size();j++)
        {
            if(str[i]==str[j])
            {
                csum++;
                if(i==str.size()-1 && j==str.size()-1 )// csum>mxsum)
                {
                    cout<<str[i]<<endl;

                }
                mxsum=max(csum,mxsum);


            }
        }
        csum=0;
    }

    cout<<mxsum;
}

