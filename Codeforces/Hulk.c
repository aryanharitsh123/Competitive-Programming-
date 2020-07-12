#include<stdio.h>
typedef long long int lli;
int main() {
  int n,i;
  scanf("%d", &n);

  for(i=1;i<n;i++){
    if(i%2==1){
      printf("I hate that ");
    }
    else{
        printf("I love that ");
    }
  }
  
  if(n%2==1){
    printf("I hate it\n");
  }
  else{
      printf("I love it\n");
  }

  return 0;
}

