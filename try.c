#include<stdio.h>
#include<string.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      char str[100000], p[100000];
      char ans[100000];
      int t=0;
      scanf("%s", &str);
      scanf("%s", &p);
      int arr_str[26], arr_p[26];
      int str_len = strlen(str);
      int str_p = strlen(p);
      int diff = str_len - str_p;
      for(int i=0;i<26;i++){
          arr_str[i] = 0;
          arr_p[i] = 0;
      }

      for(int i=0;i<str_len;i++){
          arr_str[str[i] - 'a']++;
      }
      
      for(int i=0;i<str_p;i++){
          arr_p[p[i]-'a']++;
      }

      char fc = p[0];

      for(int i=0;i<26;i++){
          if(arr_str[i]){
              if(i + 'a' ==fc){
                  for(int j=0;j<diff;j++){
                    ans[t] = (char)(i+'a');
                    t++;
                  }
              }
          }

          else{
              for(int j=0;j<arr_str[i] - arr_p[i];j++){
                  ans[t] = (char)(i + 'a'); 
              }
          }
      }

      printf("%s", ans);

  }
  return 0;
}

