#include<stdio.h>
#include <string.h>
typedef long long int lli;
int main() {
  char a[101];
  char b[101];
  char c[101];
  scanf("%s", &a);
  scanf("%s", &b);
  scanf("%s", &c);
  int boolean[26];
  int flag =0;
  for(int o=0;o<26;o++){
    boolean[o] = 0;
  }

  for(int i=0;i<strlen(c);i++){
    boolean[c[i]-'A']++;
  }

  for(int k=0;k<strlen(a);k++){
    boolean[a[k]-'A']--;
  }

  for(int o=0;o<strlen(b);o++){
    boolean[b[o]-'A']--;
  }
  
  for(int y=0;y<26;y++){
    if(boolean[y] !=0){
      flag=1;
      break;
    }
  }

  if(flag==1){
    printf("NO\n");
  }
  
  else{
    printf("YES\n");
  }
}
