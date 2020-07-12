#include<stdio.h>
#include<string.h>
typedef long long int lli;
int main() {
  int n,i,cnt=0;
  scanf("%d", &n);
  char s[n];
  scanf("%s", &s);
  for(i=0;i<n-2;i++){
    if(s[i]=='A' && s[i+1]=='B' && s[i+2]=='C'){
      cnt++;
    }
  }

  printf("%d", cnt);
  return 0;
}
