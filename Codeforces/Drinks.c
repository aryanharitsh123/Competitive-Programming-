#include<stdio.h>
typedef long long int lli;
int main() {
  int n,i;
  double ans =0.0;
  scanf("%d", &n);
  int arr[n];
  for(i=0;i<n;i++){
    scanf("%d", &arr[i]);
    ans = ans + arr[i];
  }
  ans = ans/n;
  printf("%.12lf\n", ans);

}

