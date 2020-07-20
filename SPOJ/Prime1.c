#include<stdio.h>
#include<stdlib.h>
#include <math.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
    lli m,n;
    scanf("%ld %ld", &m, &n);
    lli arr[n+1];
    
    for(int y=0;y<(m-n+1);y++){
      arr[y] = 0;
    }

    lli t = ceil(sqrt(n));
    lli primes[t];
    lli k=0;
    for(int i=2;i<=t;i++){
        if((arr[i]) !=1){
          arr[i] = 1;
          primes[k] = i;
        }

        for(int j=2*i;j<=n;j=j+i){
          arr[j] = 1;
        }
    }
    
    for(int p=0;p<t;p++){
      printf("%d ", primes[k]);
    }
    
  }
  return 0;
}

