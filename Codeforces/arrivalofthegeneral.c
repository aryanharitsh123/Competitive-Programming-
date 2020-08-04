#include<stdio.h>
typedef long long int lli;
int main() {
  int n;
  scanf("%d", &n);
  int maxvalue=0;
  int minvalue=1000;
  int maxindex=0;
  int minindex=0;

  for(int i=0;i<n;i++){
      int x;
      scanf("%d", &x);
      if(x>maxvalue){
          maxvalue=x;
          maxindex=i;
      }
      if(x<=minvalue){
          minindex=i;
          minvalue=x;
      }
  }

  if(maxindex>minindex){
      printf("%d\n", maxindex-1 + (n-minindex)-1);
  }
  else{
      printf("%d\n", (maxindex-1)+(n-minindex));
  }
  return 0;
}

