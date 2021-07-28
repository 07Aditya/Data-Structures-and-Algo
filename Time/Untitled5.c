#include<stdio.h>
#include<string.h>

int main()
{
    char z[11],a='0',b='1',c='2';
    //printf("12 hour:");
    gets(z);
    if(z[8]=='A')
    {
        if(z[0]=='1' && z[1]=='2')
        {
           z[0]==a;
           z[1]==a;
           printf("1: %s",z);
        }

    }

    else if(z[1]=='8'|| z[1]=='9')
    {
        if(z[1]=='8')
        {
            z[0]=='2';
            z[1]=='0';
             printf("2: %s",z);
        }
        else
        {
            z[0]==2;
            z[1]==1;
             printf("3: %s",z);
        }

    }
    else
    {
        if(z[0]=='0'|| z[1]!='2')
        {
            z[0]+=1;
            z[1]+=2;
             printf("4: %s",z);
        }
    }

    z[8]='\0';
puts(z);

}
