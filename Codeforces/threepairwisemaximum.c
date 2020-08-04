#include<stdio.h>
#include<stdlib.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      lli x,y,z;
      scanf("%lld %lld %lld", &x, &y, &z);
      if(x==y && y==z){
          printf("YES\n");
          printf("%lld %lld %lld\n", z,z,z);
      }
      else if(x==y && x>z){
          printf("YES\n");
          printf("%lld %lld %lld\n", x,z,z);
      }
      else if(x==z && x>y){
          printf("YES\n");
          printf("%lld %lld %lld\n", y,x,y);
      }
      else if(y==z && y>x){
          printf("YES\n");
          printf("%lld %lld %lld\n", x,x,y);
      }
      else{
          printf("NO\n");
      }

      printf("\n");
  }
}
