#include<stdio.h>
int main(){
    int testcases;
    scanf("%d", &testcases);
    while(testcases--){
        long long int n;
        scanf("%lld", &n);
        printf("%lld %d\n", n-1, 1);
    }
}
