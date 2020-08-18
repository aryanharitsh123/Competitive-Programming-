#include<stdio.h>
#include<string.h>
typedef long long int lli;
int main() {
  int n;
  int ac=0,wa=0,tle=0,re=0;
  scanf("%d", &n);
  while(n--){
      char s[3];
      scanf("%s", &s);
      if(strcmp(s,"AC")==0){
          ac++;
      }
      else if(strcmp(s,"WA")==0)
        wa++;
      else if(strcmp(s,"TLE")==0)
        tle++;
      else if(strcmp(s,"RE")==0)
        re++;
  }

  printf("%s x %d\n", "AC",ac);
  printf("%s x %d\n", "WA", wa);
  printf("%s x %d\n", "TLE", tle);
  printf("%s x %d\n", "RE", re);
  return 0;
}

