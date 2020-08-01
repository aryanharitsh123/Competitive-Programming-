#include<stdio.h>
typedef long long int lli;
int main() {
  int n,m,k;
  scanf("%d %d %d", &n,&m,&k);
  if(m<n || k<n)
    printf("No\n");
  else
    printf("Yes\n");
  return 0;
}

