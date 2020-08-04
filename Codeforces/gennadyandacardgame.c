#include<stdio.h>
typedef long long int lli;
int main() {
  char s1[10];
  char s2[100];
  scanf("%s", &s1);
  scanf("%[^\n]%*c", s2);
  
  for(int i=0;i<=12;i=i+3){
      if(s2[i]==s1[0])
        printf("YES\n");
      return 0;
  }

  for(int i=1;i<=13;i=i+3){
      if(s2[i]==s1[1])
        printf("YES\n");
      return 0;
  }

  printf("NO\n");
}

