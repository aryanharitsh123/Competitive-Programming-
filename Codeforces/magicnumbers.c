#include<stdio.h>
#include<string.h>
typedef long long int lli;
int main() {
  char s[10000000000];
   scanf("%s", &s);
    int flag=0;
   for(int i=0;i<strlen(s);){
      if(s[i]=='1' && s[i+1]=='4' && s[i+2]=='4'){
          flag=0;
      }
      if(s[i]=='1' && s[i+1]=='4')
        flag=0;
      if(s[i]=='1')
        flag=0;
      else
        flag=1;
      break;
   }

   if(flag==1)
     printf("NO\n");
   else
     printf("YES\n");

  return 0;
}

