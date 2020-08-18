#include<stdio.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
    int n;
    lli k;
    lli temp = 10000;
    int ans = -1;
    scanf("%d %lld", &n, &k);
    lli arr[n];

    for(int i=0;i<n;i++){
        scanf("%lld", &arr[i]);
    }

    for(int i=0;i<n;i++){
        if((k % arr[i])==0){
            if(k/arr[i] < temp){
                temp = arr[i];
                ans = arr[i];
            }
        }
    }

    printf("%d\n", ans);
  }
}

