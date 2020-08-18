#include<stdio.h>
#include<math.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      lli p,h;
      scanf("%lld %lld", &h, &p);
      while(1){
        h = h-p;
        p = floor(p/2);

        if(h<=0){
            printf("%d\n", 1);
            break;
        }
        else if(p<=0){
            printf("%d\n", 0);
            break;
        }

      }

  }
  return 0;
}

