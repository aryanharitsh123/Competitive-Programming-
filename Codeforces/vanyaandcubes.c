#include<stdio.h>
typedef long long int lli;
int main(){
  int n;
  scanf("%d", &n);
  int sum=1;
  int height =1;
  if(n==1){
      printf("%d\n", 1);
  }
  else{
    for(int i=2;i<=n;i++){
        height = height + i;
        sum = sum + height;
        if(sum>n){
            printf("%d", i-1);
          break;
       }
    }
  }
}

