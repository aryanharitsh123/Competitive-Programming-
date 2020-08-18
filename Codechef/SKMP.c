#include<stdio.h>
#include<string.h>
#include<stdlib.h>
typedef long long int lli;
int main(){
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      char str[100000],pattern[100000];
      scanf("%s", &str);
      scanf("%s", &pattern);
      int len_str = strlen(str);
      int len_pattern = strlen(pattern);
      char distinct[100000];
      int diff = len_str - len_pattern;
      int boolean[26];
      int i,j,t=0;
      
      for(i=0;i<26;i++){
          boolean[i] = 0;
      }

      for(i=0;i<len_str;i++){
          boolean[str[i] - 'a']++;
      }

      for(i=0;i<len_pattern;i++){
          boolean[pattern[i] - 'a']--;
      }

      for(i=0;i<26;i++){
        if(boolean[i]!=0){
            while(boolean[i]--){
                distinct[t] = (char)(i + 'a');
                t++;
            }
        }
      }
      int flag=0;
      int temp=0;
      for(i=0;i<diff;i++){
        if(flag==0){
          for(j=0;j<len_pattern;j++){
              if(distinct[i]<pattern[j]){
                  printf("%c", distinct[i]);
                  temp++;
                  break;
              }
              else if(distinct[i]>pattern[j]){
                  printf("%s", pattern);
                  i--;
                  flag=1;
                  break;
              }
          }
        }
        else{
              printf("%c", distinct[i]);    
              temp++;
        }
      }
      if(temp==diff){
          printf("%s", pattern);
      }

      printf("\n");
  }
  return 0;
}

//zzbbbbbaba
//zzbbb
