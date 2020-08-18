#include<stdio.h>
typedef long long int lli;
int main() {
  char s[3];
  scanf("%s", &s);
  int ans=0;

  for(int i=0;i<3;i++){
      if(s[i]=='R')
        ans++;
      if(s[i]=='S' && i==1)
        break;
  }
  if(s[0]=='S' && s[1]=='S' && s[2]=='R')
    ans=1;

  printf("%d", ans);
}

