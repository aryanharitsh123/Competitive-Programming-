#include<stdio.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
    int n,flag=0;
    scanf("%d", &n);
    char s[n];
    scanf("%s", &s);
    int alpha[26];
    for(int z=0;z<26;z++){
      alpha[z] = 0;
    }

    if(n%2==1){
      printf("NO\n");
    }

    else{
      for(int i=0;i<n;i++){
        alpha[s[i] - 'a']++;
      }

      for(int j=0;j<26;j++){
        if(alpha[j]%2!=0){
          printf("NO\n");
          flag=0;
          break;
        }
        else{
          flag=1;
        }
      }

      if(flag==1){
        printf("YES\n");
      }
    }
  }
}
