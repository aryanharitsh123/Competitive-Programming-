#include<stdio.h>
typedef long long int lli;
int main() {
  int n,ans=0;
  scanf("%d", &n);
  char s[n];
  scanf("%s", &s);
  int boolean[26];

  for(int p=0;p<26;p++){
    boolean[p] = 0;
  }
  
  //Converting complete string to lowercase

  for(int u=0;u<n;u++){
    if(s[u]>=65 && s[u]<=90){
      s[u] = s[u] + 32;
    }
  }


  for(int a=0;a<n;a++){
    boolean[s[a] - 'a'] = 1;
  }

  for(int l=0;l<26;l++){
    if(boolean[l] ==1){
      ans++;
    }
  }
  
  if(ans==26){
    printf("YES\n");
  }
  else{
    printf("NO\n");
  }
  
  return 0;
}

