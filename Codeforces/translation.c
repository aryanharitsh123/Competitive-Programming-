#include <stdio.h>
#include <string.h>
int main(){
  char s[1001];
  char t[1001];
  scanf("%s", &s);
  scanf("%s", &t);
  int l = strlen(s);
  int flag=0,i;

  for (i=0;i<l;i++){
    if(s[i] == t[l-i-1]){
        flag=0;
    }
    else{
        flag=1;
        printf("NO\n");
        break;
    }
  }

  if(flag==0){
    printf("YES\n");
  }
  
  return 0;
}

