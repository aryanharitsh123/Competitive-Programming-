#include<stdio.h>
typedef long long int lli;
int main() {
  int n,cntA=0,cntD=0;
  scanf("%d", &n);
  char s[n];
  scanf("%s", &s);

  for(int i=0;i<n;i++){
    if(s[i]=='A'){
      cntA++;
    }
    else{
      cntD++;

    }
  }

  if(cntA>cntD){
    printf("Anton\n");
  }
  else if(cntD>cntA){
      printf("Danik\n");
  }
  else{
      printf("Friendship\n");
  }

  return 0;
}


