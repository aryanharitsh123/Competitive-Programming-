#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
    lli m,n;
    scanf("%ld %ld", &m,&n);
    lli i,j;
    lli arr[n-m];
    int t=0;
    lli y = sqrt(n); 
    for(int o=m;o<n;o++){
      arr[t] = m;
      t++;
    }
    int k =0;
    for(i=2;i<=y;i++){
      if(arr[i-1] !=0){
        arr[i-1] = 0;
      }

      for(j=2*i;j<=n;j=j+i){
        arr[j] = 1;
      }
    }

    for(int l=0;l<(n-m);l++){
      if(arr[l] != 0){
        printf("%ld\n", arr[l]);
      }
    }
    printf("\n");
  }
  return 0;
}

