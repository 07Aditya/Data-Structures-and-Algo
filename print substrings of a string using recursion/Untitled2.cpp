#include<bits/stdc++.h>
//#include<string>
using namespace std;

void prints(string s,string ans)
{
    if(s.length()==0){
        cout<<ans<<endl;
        return ;
        }

        char c=s[0];
        int code=c;
        //cout<<c<<endl;

        string ros=s.substr(1);

       prints(ros,ans);
      // cout<<c<<endl;
       prints(ros,ans+c);
       prints(ros,ans + to_string(code));

}
int main()
{
   prints("ABC","");

}
