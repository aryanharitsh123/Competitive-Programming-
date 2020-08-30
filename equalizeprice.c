#include<stdio.h>
#include<stdlib.h>
typedef long long int lli;
lli cmpfunc(const void *a,const void *b){
    return(*(lli*)a - *(lli*)b); 
}
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
    lli n,k;
    scanf("%lld %lld", &n,&k);
    lli arr[n];
    int flag =1;
  
    for(int i=0;i<n;i++){
        scanf("%lld", &arr[i]);
    }
  
    qsort(arr, n, sizeof(lli), cmpfunc);

    for(int j=0;j<n-1;j++){
        if(abs(arr[j+1] - arr[j])>k){
            printf("%d\n", -1);
            flag = 0;
        }
    }
    if(flag==1)
      printf("%lld\n",arr[0] + k);
  }
  return 0;
}

