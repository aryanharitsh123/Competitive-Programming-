#include<stdio.h>
#include<string.h>
typedef long long int lli;
#define min(a,b) (((a)>(b))?(b):(a))
#define max(a,b) (((a)>(b)?(a):(b)))
int main(){
  char s1[1000000];
  char s2[1000000];
  scanf("%s", &s1);
  scanf("%s", &s2);
  
  int l1 = strlen(s1);
  int l2 = strlen(s2);
  int final = min(s1,s2);
  int ans=0;
  for(int i = 0;i<final;i++){
      if(s1[i] != s2[i]){
          ans++;
      }
  }
  
  printf("%d", ans*2);

}

