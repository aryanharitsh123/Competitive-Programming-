#include <stdio.h>
int main(){
    long long int k,n,w;
    scanf("%lld %lld %lld\n", &k, &n, &w);
    long long int sum = k * (w*(w+1)/2);
    long long int ans = sum -  n;
    if(ans<=0){
        ans=0;
    }
    printf("%lld\n", ans);
}