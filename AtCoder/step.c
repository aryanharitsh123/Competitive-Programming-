#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>
int main()
{
    long long int n, i, max=0, cnt=0;
    scanf("%lld", &n);
    long long int a[n];
    for(i=0; i<n; i++)
    {
        scanf("%lld", &a[i]);
    }
    max=a[0];
    for(i=1; i<n; i++)
    {
        if(max>a[i])
        {
            cnt=cnt+max-a[i];
            a[i]=a[i]+max-a[i];
        }
        else if(max<a[i])
        {
            cnt=cnt+0;
            max=a[i];
        }
    }
    printf("%lld\n", cnt);
    return 0;
}
