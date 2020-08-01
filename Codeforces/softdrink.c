#include<stdio.h>
typedef long long int lli;
int min(int a,int b){
    if(a>b)
      return b;
    else
      return a;
}
int main() {
  int n,k,l,c,d,p,nl,np;
  scanf("%d %d %d %d %d %d %d %d", &n, &k, &l,&c,&d,&p,&nl,&np);
  int a,b,x;
  a = (k * l)/nl;
  b = c*d;
  x = p/np;
  
  int ans = min(b,x);
  ans = min(a,ans);

  ans = ans/n;

  printf("%d\n", ans);

  return 0;
}

