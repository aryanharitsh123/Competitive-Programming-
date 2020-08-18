#include<stdio.h>
#include<string.h>
typedef long long int lli;
int main() {
  char s[300];  
  scanf("%s", &s);
  int l=strlen(s);
  int flag=1;
  for(int i=0;i<l;i++){
    if(s[i]=='W' && s[i+1] == 'U' && s[i+2]=='B'){
        i+=2;
        if(!flag){
            printf(" ");
        }
        continue;
    }else{
        flag=0;
        printf("%c", s[i]);
    }
  }
  
  return 0;
}

