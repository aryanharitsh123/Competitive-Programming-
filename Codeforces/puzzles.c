#include<stdio.h>
#include<stdio.h>

int cmpfunc(const void *a , const void *b){
    return (*(int*)a - *(int*)b);
}

typedef long long int lli;
int main() {
  int n,m,f[1000];
  scanf("%d %d", &n, &m);

  for(int i=0;i<m;++i){
      scanf("%d", f[i]);
  }
  
  qsort(f,m,sizeof(int),cmpfunc);

  int least = f[n-1] - f[0];

  for(int i=1;i<=m-n;++i){
      if(f[i+n-1] - f[i] <least){
          least = f[i+n-1] - f[i];
      }
  }

  printf("%d\n", least);

  return 0;
}

