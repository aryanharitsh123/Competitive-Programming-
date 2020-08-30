#include<stdio.h>
#include<stdlib.h>
typedef long long int lli;

lli cmpfunc(const void *a, const void *b){
    return(*(int*)a  - *(int*)b);
}

lli binarysearch(lli arr[],lli low,lli high, lli target){
    while(low<=high){
        lli mid = low + (high-low)/2;
        if(arr[mid]==target)
          return mid;
        if(arr[mid]<target)
          low = mid +1;
        else
          high = mid -1;     
    }
    return -1;
}

int main(){
  lli n,q;
  scanf("%lld", &n);
  lli arr[n];
  
  for(lli i=0;i<n;i++){
      scanf("%lld", &arr[i]);
  }
  
  qsort(arr,n,sizeof(lli), cmpfunc);
  
  scanf("%lld", &q);

  for(lli i=0;i<q;i++){
      lli x;
      scanf("%lld", &x);

      printf("%lld\n", binarysearch(arr,0,n-1,x)+1);
  }

}

