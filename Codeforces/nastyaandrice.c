#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
    int n,a,b,c,d;
    scanf("%d %d %d %d %d", &n, &a, &b,&c, &d);
    int wl = abs(a-b);
    int wu = abs(a+b);
    int tl = abs(c-d);
    int tu= abs(c+d);
    int flag=1;

    for(int i=wl;i<=wu;i++){
        for(int j=tl;j<=tu;j++){
            if(j%i==0){
                printf("Yes\n");
                flag=1;
                break;
            }
        }
        if(flag==1)
          break;
    }
    if(flag!=1)
      printf("No\n");
    else
      printf("Yes\n");
  }

  return 0;
}

