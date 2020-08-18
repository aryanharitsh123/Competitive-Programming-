#include<stdio.h>
#define max(a,b) (((a) > (b))? (a):(b))
typedef long long int lli;
int main() {
  int n,l=1,ml=1;
  scanf("%d", &n);
  int arr[n];

  for(lli i=0;i<n;i++){
      scanf("%d", &arr[i]);
      if(i>0){
          if(arr[i]>=arr[i-1]){
            l++;
            ml = max( ml, l);
          }
          else{
              l=1;
          }
      }
  }

  printf("%d\n", ml);
  return 0;
}

