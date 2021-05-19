#include<iostream>
using namespace std;
int main()
{
    int T,i;
    int ans;
    cin>>T;
    int X[T],A[T],B[T];
    for(i=0;i<T;i++)
    {
        cin>>X[i]>>A[i]>>B[i];
    }
    for(i=0;i<T;i++)
    {
        if(T>=1 && T<=1000 && X[i]>=31 && X[i]<40 && A[i]>=101 && A[i]<=120 && B[i]>=1 && B[i]<=5)
        {
            ans=A[i]+((100-X[i])*B[i]);
            ans=ans*10;
            cout<<ans<<endl;
        }
    }
    return 0;
}