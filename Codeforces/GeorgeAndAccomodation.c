#include<stdio.h>
typedef long long int lli;
int main() {
  int n,cnt=0;
  scanf("%d", &n);
  for(int i=0;i<n;i++){
    int a=0,b=0;
    scanf("%d %d", &a, &b);
    if(b-a>=2){
      cnt++;
    }
  }

  printf("%d\n", cnt);
  return 0;
}

