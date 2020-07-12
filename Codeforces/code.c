#include <stdio.h>
typedef long long int lli;
int main(){
    lli n;
    scanf("%lld", &n);
    lli count=0;

    while(n!=0){
        if(n%10==4 || n%10==7){
            count++;
        }
        n = n/10;
    }

    if(count==4 || count==7){
        printf("YES\n");
    }
    else{
        printf("NO\n");
    }
}
