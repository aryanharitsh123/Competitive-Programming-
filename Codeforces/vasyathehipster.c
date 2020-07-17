#include<stdio.h>
#include<stdio.h>
typedef long long int lli;
int main() {
  int a,b,max=0,min=0,ans=0;
  scanf("%d %d", &a, &b);
  if(a>b){
    min=b;
    max=a;
  }
  else{
    min = a;
    max = b;
  }
  ans = ceil((max - min)/2);

  printf("%d %d", min, ans);

  return 0;
}

