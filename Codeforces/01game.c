#include<stdio.h>
#include<string.h>
typedef long long int lli;
#define min(a,b) (((a)>(b))? (b):(a))
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      char s[100];
      scanf("%s", &s);
      int len = strlen(s);
      int countofzeroes=0;
      int countofones=0;
      
      for(int i=0;i<len;i++){
          if(s[i]=='1')
              countofones++;
          else
              countofzeroes++;
      }
      
      int m = min(countofones,countofzeroes);
      
      if((m%2)==0){
          printf("NET\n");
      }
      else
        printf("DA\n");
      

  }
  return 0;
}


