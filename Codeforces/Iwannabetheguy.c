#include<stdio.h>
#include<string.h>
typedef long long int lli;
int main() {
  int n,p,m,q,flag=0;
  scanf("%d", &n);
  scanf("%d", &p);
  int x[p],merge[n];
  
  for(int i=0;i<p;i++){
      scanf("%d", &x[i]);
      m = x[i];
      merge[m] = 1;
  }
  scanf("%d", &q);
  int y[q];
  for(int i=0;i<q;i++){
      scanf("%d", &y[i]);
      m=y[i];
      merge[m] = 1;
  }

  for(int i=1;i<=n;i++){
      if(merge[i]==1)
        flag=1;
      else{
        flag=0;
        break;
        }
  }

  if(flag ==1){
      printf("I become the guy\n");
  }
  else{
    printf("Oh, my keyboard!\n");
  }
  return 0;
}

