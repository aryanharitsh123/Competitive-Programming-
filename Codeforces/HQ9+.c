#include<stdio.h>
#include<string.h>
typedef long long int lli;
int main() {
  char s[1000];
  scanf("%s", &s);
  int l= strlen(s);

  for(int t=0;t<l;t++){
      if(s[t]=='H' || s[t]== 'Q' || s[t]== '9'){
          printf("YES\n");
          return 0;
      }
  }

  printf("NO\n");
  return 0;
}

