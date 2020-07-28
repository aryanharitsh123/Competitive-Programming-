#include<stdio.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
    lli n;
    lli sumofeven=0;
    lli sumofodd=0;
    scanf("%lld", &n);

    if((n/2)%2==1){
      printf("NO\n");
    }
    
    else{
      lli x=1;
      lli y=2;

      printf("YES\n");
      for(lli i=0;i<n/2;i++){
        printf("%ld ", y);
        sumofeven = sumofeven + y;
        y=y+2;
      }

      for(lli j=0;j<(n/2)-1;j++){
        printf("%ld ", x);
        sumofodd = sumofodd + x;
        x = x+2;
      }

      printf("%ld ", sumofeven - sumofodd);
      printf("\n");
    }
  }
  return 0;
}

