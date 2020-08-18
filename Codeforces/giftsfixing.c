#include<stdio.h>
#include<stdio.h>
typedef long long int lli;
lli cmpfunc(const void *a, const void *b){
    return (*(lli*)a - *(lli*)b);
}
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      int n;
      scanf("%d", &n);
      lli a[n];
      lli b[n];

      for(lli x=0;x<n;x++){
          scanf("%lld", &a[x]);
      }

      for(lli x=0;x<n;x++){
          scanf("%lld", &b[x]);
      }
      
      lli minofa = a[0];
      lli minofb = b[0];

      for(lli x=0;x<n;x++){
          if(a[x]<minofa)
            minofa = a[x];
      }
      
      for(lli x=0;x<n;x++){
          if(b[x]<minofb)
            minofb=b[x];
      }

      lli ans=0;
      
      for(lli i=0;i<n;i++){
          lli temp1= a[i]  - minofa;
          lli temp2 = b[i] - minofb;
          if(temp1>temp2){
              ans = ans+ temp1;
          }
          else if(temp2>temp1)
            ans = ans+temp2;
          else
            ans = ans+temp1;
      }

      printf("%lld\n", ans);

  }
  return 0;
}

