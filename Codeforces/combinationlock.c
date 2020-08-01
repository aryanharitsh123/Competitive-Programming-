#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef long long int lli;
int main() {
  int n;
  scanf("%d", &n);
  char a[n];
  char b[n];
  scanf("%s",&a);
  scanf("%s", &b);
  int ans = 0;
  for(int i=0;i<n;i++){
      int x = abs(a[i]-b[i]);
      if(x<9-x){
          ans = ans+x;
      }
      else{
        ans = ans+(10-x);
      }
  }

  printf("%d", ans);

  return 0;
}

