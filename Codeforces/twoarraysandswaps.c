#include<stdio.h>
#include<stdlib.h>

int cmpfunc(const void * a, const void * b){
    return( *(int*)a - *(int*)b);
}

typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
    int n,k;
    scanf("%d %d", &n, &k);
    int arr1[n];
    int arr2[n];

    for(int x=0;x<n;x++){
        scanf("%d", &arr1[x]);
    }

    for(int x=0;x<n;x++){
        scanf("%d", &arr2[x]);
    }
  
    qsort(arr1,n,sizeof(int),cmpfunc);
    qsort(arr2,n,sizeof(int),cmpfunc);

    while(k!=0){
        int i=0,j=n,temp=0;
        if(arr1[i]<arr2[j]){
            temp = arr1[i];
            arr1[i] = arr2[j];
            arr2[j] = temp;
            k--;
        }
       else{
           j--;
           i++;
       }
    }

   for(int k=0;k<n;k++){
       printf("%d", arr1[k]);
    }
  }

  return 0;
}

