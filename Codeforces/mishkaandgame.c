#include<stdio.h>
typedef long long int lli;
int main() {
  int n;
  scanf("%d", &n);
  int temp = n;
  int mishka=0;
  int chris=0;
  while(temp--){
      int a,b;
      scanf("%d %d", &a, &b);
      if(a>b){
          mishka++;
      }
      else if(a<b){
          chris++;
      }
  }

  if((mishka)>(chris))
    printf("Mishka\n");
  else if((chris)>(mishka))
    printf("Chris\n");
  else if (mishka==chris)
    printf("Friendship is magic!^^\n");
  return 0;
}

