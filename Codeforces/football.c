#include<stdio.h>
#include<string.h>
typedef long long int lli;
int main() {
  char s[1001];
  scanf("%s", &s);
  int count=1;
  int l=strlen(s);
  for(int i=1;i<l;i++){
    if(s[i]==s[i-1]){
        count++;
        if(count==7){
            printf("YES\n");
            return 0;
        }
    }
    else{
        count =1;
    }
  }

  printf("NO\n");
  return 0;
}


