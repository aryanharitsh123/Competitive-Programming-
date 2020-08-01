#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int min(int a, int b){
    if(a>b)
      return b;
    else
      return a;
}
typedef long long int lli;
int main() {
  char s[1000];
  lli sum=0;
  scanf("%s", &s);
  char start='a';
  for(int i=0;i<strlen(s);i++){
      lli l1 = abs(s[i]-start);
      lli l2=26-abs(l1);
      sum+=min(l1,l2);
      start=s[i];
  }

  printf("%d", sum);
  return 0;
}

