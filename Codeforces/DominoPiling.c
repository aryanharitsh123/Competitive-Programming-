#include <stdio.h>
#include <math.h>
int main(){
    int m,n,ans=0;
    scanf("%d %d", &m, &n);
    
    ans = ceil((m*n)/2);

    printf("%d\n", ans);

}