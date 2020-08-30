#include<stdio.h>
typedef long long int lli;
int main() {
  int n,k;
  scanf("%d %d", &n, &k);
  lli arr[n];

  for(int i=0;i<n;i++){
      scanf("%lld", &arr[i]);
  }
  
  for(int i=0;i<k;i++){
      lli x;
      scanf("%lld", &x);
      
      lli l = -1;
      lli r = n;
      
      while(r>l+1){
        lli m = (l+r)/2;
        if(arr[m]<=x){
            l = m;
        }
        else{
            r = m;
        }
      }
      printf("%lld\n", l+1);
  }

  return 0;
}

