#include<stdio.h>

int main(){
    long long int n,m,x;
    scanf("%lld%lld%lld",n,m,x);
    long long int arr[n][m];
    long long int a,b,i , j , temp = 1;
    
    for(i=0;i<n;i++){
        for(j=0;j<m;j++){
            arr[i][j] = t;
            t++;
            if(t==x){
                a=i;
                b=j;
            }
        }
    }

    printf("%lld\n",arr[b[a]]);
}