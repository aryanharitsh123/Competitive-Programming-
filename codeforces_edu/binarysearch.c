#include<stdio.h>
#include<stdlib.h>
typedef long long int lli;
int main() {
  int n,k;
  scanf("%d %d", &n, &k);
  lli arr[n];
  
  for(lli i=0;i<n;i++){
      scanf("%lld", &arr[i]);
  }

  for(lli i=0;i<k;i++){
      lli x;
      scanf("%lld", &x);
      lli l =0;
      lli r =n-1;
      lli flag=0;
      while(r>=l){
        lli m = (l+r)/2;

        if(arr[m]==x){
            flag=1;
            break;
        }
        else if(arr[m] <x){
            l = m+1;
        }
        else if (arr[m] >x){
            r = m -1;
        }
      }

      if(flag==1){
          printf("YES\n");
      }
      else
        printf("NO\n");
  }
  return 0;
}

