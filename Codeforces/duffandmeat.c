#include<stdio.h>
typedef long long int lli;
int main() {
  int n;
  scanf("%d", &n);
  int req[n];
  int price[n];
  int temp = n;
  int x=0;
  
  while(temp--){
      int a,b=0;
      scanf("%d %d", &a, &b);
      req[x] = a;
      price[x] = b;
      x++;
  }
  
  int minofprice=1000;
  int temp2=0;
  int total=0;
  int i=0;
  for(int x=0;x<n;x++){
    if(price[x]<price[i])
      i=x;
    total = total + (req[x]*price[i]);
    //printf("%d\n", total);
  }
  printf("%d", total);

  return 0;
}

