#include<stdio.h>
#define max(a,b) (((a)>(b))?(a):(b))
typedef long long int lli;
int main() {
  int a,b,c,d;
  scanf("%d %d %d %d", &a,&b,&c,&d);
  
  int misha = max(((3*a)/10),a-(a/250)*c);
  int vasya = max(((3*b)/10),b-(b/250)*d);
  
  if(misha>vasya)
    printf("Misha");
  else if(misha<vasya)
    printf("Vasya");
  else
    printf("Tie");
  
  //printf("%d %d", vasya, misha);

  return 0;
}

