#include<stdio.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      lli pc,pr;
      scanf("%lld %lld", &pc, &pr);
      int countpc=0;
      int countpr=0;

      if(pc%9==0){
          countpc+=pc/9;
      }
      else{
          countpc+= pc/9+1;
      }

      if(pr%9==0){
          countpr+=pr/9;
      }
      else{
          countpr+=pr/9+1;
      }

      if(countpc<countpr){
          printf("%d %d\n", 0, countpc);
      }
      else if(countpr<countpc){
          printf("%d %d\n", 1, countpr);
      }
      else if(countpr==countpc){
          printf("%d %d\n", 1,countpr);
      }


  }
  return 0;
}

