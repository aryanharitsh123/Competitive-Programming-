#include<stdio.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--)
  {
      int n;
      scanf("%d", &n);
      
      int arr[n+1];

      for(int i=1; i<=n;i++){
          arr[i]=i;
      }
      
      int cd[n+1];

      for(int i=0;i<n+1;i++){
          cd[i] = 2;
      }

      for(int i=2;i<=n;i++){
          if(arr[i] ==i && cd[i] ==2){
              for(int j=2 *i;j<=n; j+=i){
                  if(cd[j]>0){
                      arr[j] = arr[j]/i;
                      cd[j]--;
                  }
              }
          }
      }

      int primes[n];
      
      for(int o=0;o<n;o++){
          primes[o] = -1;
      }

      int t=0;
      for(int i=2;i<=n;i++){
          if(arr[i] ==1 && cd[i]==0)
          primes[t] = i;
          t++;
      }
      int k=0;
      int temp = n;
      int sum=0;
      
      while(temp>0){
        if(temp - primes[k] >0){
            printf("%d ", primes[k]);
            temp  = temp - primes[k];
            sum = sum + primes[k];
        }
        else{
            break;
        }
        k++;
      }

    return 0;
  }
}
