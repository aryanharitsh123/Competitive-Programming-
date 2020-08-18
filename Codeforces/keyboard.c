#include<stdio.h>
#include<string.h>
typedef long long int lli;
int main() {
  char s[1];
  char os[1000];
  char s1 = "qwertyuiop";
  char s2 = "asedfghjkl";
  char s3 = "zxcvbnm,./";
  scanf("%s", s);
  scanf("%s", os);
  
  for(int i=0;i<strlen(os);i++){
      for(int j=0;j<strlen(s1);j++){
          if(s1[j]==os[i]){
              if(s=='R'){
                  printf("%c",s1[j+1]);
              }
          }
      }
  }


  return 0;
}

