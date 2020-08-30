#include<stdio.h>
#include<stdlib.h>
typedef long long int lli;

lli cmpfunc (const void *a, const void *b){
    return (*(lli*)a - *(lli*)b);
}

int main() {
  int n,cnt_even=0,cnt_odd=0;
  scanf("%d", &n);
  lli arr[n]; 
  lli even[n];
  lli odd[n];

  for(int i=0;i<n;i++){
    scanf("%lld", &arr[i]);
  }
  
  for(int i=0;i<n;i++){
      even[i] = 0;
      odd[i] = 0;
  }
  
  int a=0,b=0;

  for(int i=0;i<n;i++){
      if(arr[i]%2==0){
          even[a] = arr[i];
          a++;
      }
      else{
          odd[b] = arr[i];
          b++;
      }
  }
  
  for(int i=0;i<n;i++){
      if(arr[i]%2==0)
        cnt_even++;
      else
        cnt_odd++;
  }
  
  if(abs(cnt_even - cnt_odd)==0 || abs(cnt_even - cnt_odd)==1){
    printf("%d", 0);
  }

  else{
      lli sum=0;

      for(int i=0;i<a-cnt_even;i++){
          sum = sum + even[i];
      }

      for(int i=0;i<b-cnt_odd;i++){
          sum = sum + odd[i];
      }
      
      printf("%d", sum);
  }
}

