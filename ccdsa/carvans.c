#include<stdio.h>
typedef long long int lli;
#define min(a,b) (((a)>(b))?(b):(a))
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
    int n;
    scanf("%d", &n);
    int arr[n];
    int ans=1;
    for(int i=0;i<n;i++){
        scanf("%d", &arr[i]);
    }
    int mins = arr[0];

    for(int i=1;i<n;i++){
        mins = min(mins,arr[i]);
        if(mins>=arr[i]){
            ans++;
        }
    }

    printf("%d\n", ans);
  }
}

