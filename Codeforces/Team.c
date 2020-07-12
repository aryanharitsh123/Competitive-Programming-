#include <stdio.h>
int main(){
    int n,i,x,ans=0,p,v,t;
    scanf("%d\n", &n);

    for(i=0;i<n;i++){
        scanf("%d %d %d\n", &p,&v,&t);
        if(p+v+t>=2){
            ans++;
        }
    }
    printf("%d\n", ans);
}