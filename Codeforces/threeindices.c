#include<stdio.h>
#include<string.h>
int max(int a,int b,int c)
{
    if(a>=b&&a>=c)
    {
        return a;
    }
    else if(b>=a&&b>=c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int min(int a,int b,int c)
{
    if(a<=b&&a<=c)
    {
        return a;
    }
    else if(b<=a&&b<=c)
    {
        return b;
    }
    else
    {
        return c;
    }
}
int main()
{
    int t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int a=-1,b=-1,c=-1,k,l,j,s=200001,z,x,y;
        char S[200001];
        scanf("%s",&S);
        l=strlen(S);
        for(j=0;j<l;j++)
        {
            if(S[j]=='1')
            {
                a=j;
            }
            else if(S[j]=='2')
            {
                b=j;
            }
            else if(S[j]=='3')
            {
                c=j;
            }
            if(a>=0&&b>=0&&c>=0)
            {
                x=max(a,b,c);
                y=min(a,b,c);
                z=x-y+1;
                if(z<s)
                {
                    s=z;
                }
            }
        }
        if(s==200001)
        {
            printf("0\n");
        }
        else
        {
            printf("%d\n",s);
        }
    }
    return 0;
}
