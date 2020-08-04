#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      char s[1001];
      scanf("%s", &s);
      int l = strlen(s);
      if(l<=2){
          printf("%s\n", s);
          printf("\n");
      }

      else{
          printf("%c", s[0]);
          
          for(int i=1;i<=l-2;i=i+2){
              printf("%c", s[i]);
          }
          
          printf("%c", s[l-1]);
      }
      printf("\n");
  }
  return 0;
}

