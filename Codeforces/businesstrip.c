#include<stdio.h>
#include<stdlib.h>

int cmpfunc(const void *a, const void *b){
    return(*(int*)a - *(int*)b);
}

typedef long long int lli;
int main() {
  int k=0,count=0;
  scanf("%d", &k);
  int arr[12];
  
  for(int i=0;i<12;i++){
      scanf("%d", &arr[i]);
  }

  if(k==0){
      printf("%d", 0);
      return 0;
  }

  else{
      qsort(arr,12,sizeof(int),cmpfunc);
      lli temp=0;
      for(int i=11;i>=0;i--){
          temp = temp + arr[i];
          count++;
          if(temp>=k){
              printf("%d", count);
              return 0;
          }
      }
  }
  
  printf("%d", -1);

  return 0;
}

