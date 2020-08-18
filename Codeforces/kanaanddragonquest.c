#include<stdio.h>
#include<math.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      int x,n,m,flag=0;
      scanf("%d %d %d", &x, &n, &m);
      
      while(n!=0 || m!=0){
        if(n>0){
            x = floor(x/2) +10;
            n--;
        }
        
        if(m>0){
            x = x-10;
            m--;
        }

        if(x<=0){
            flag=1;
            break;
        }
      }

      if(flag==1){
          printf("YES\n");
      }

      else
        printf("NO\n");
  }
  return 0;
}

