#include<stdio.h>
typedef long long int lli;
int main() {
  int n;
  scanf("%d", &n);
  int count_mishka=0,count_chris=0;
  int temp=n;
  while(temp--){
      int m,c=0;
      scanf("%d %d", &m ,&c);
      if(m>c){
          count_mishka++;
      }
      if(c>m){
          count_chris++;
      }
  }
  double chris = count_chris/n;
  double mishka = count_mishka/n;
  if(count_chris==count_mishka){
      printf("Friendship is magic!^^");
  }
  if(chris>mishka){
      printf("Chris");
  }
  if(mishka/n>chris){
      printf("Mishka");
  }

  printf("%d %d %d", chris, mishka, n);
  return 0;
}

