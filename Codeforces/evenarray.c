#include<stdio.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      int n;
      int countodd=0,counteven=0;
      scanf("%d", &n);
      int arr[n];

      for(int x=0;x<n;x++){
          scanf("%d", &arr[x]);
      }
      
      for(int i=0;i<n;i++){
        if(i%2==0 && arr[i]%2==1)
          countodd++;
        else if(i%2==1 && arr[i]%2==0)
          counteven++;
      }
      
      if(counteven==countodd){
          printf("%d\n", counteven);
      }
      else{
          printf("%d\n", -1);
      }
  }
  return 0;
}

