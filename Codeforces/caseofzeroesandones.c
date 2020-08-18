#include<stdio.h>
#include<string.h>
#define min(a,b) (((a) > (b))? (b) : (a))
typedef long long int lli;
int main() {
  int n;
  scanf("%d", &n);
  char s[n];
  scanf("%s", &s);
  int countofones=0,countofzeroes=0;
  
  for(int i=0;i<n;i++){
      if(s[i] == '0'){
          countofzeroes++;
      }
      else
        countofones++;
  }
  int ans = min(countofones,countofzeroes);
  printf("%d",n- ans*2);

  return 0;
}

