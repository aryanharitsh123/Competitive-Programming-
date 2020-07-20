#include<stdio.h>
#include <stdlib.h>
typedef long long int lli;

lli cmpfunc(const void *a, const void * b) {
  return (*(lli*)a - *(lli*)b);
}

int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
    lli x,y,z;
    lli arr[3];
    scanf("%ld %ld %ld\n", &x, &y, &z);
    arr[0]=x;
    arr[1]=y;
    arr[2]=z;

    qsort(arr, 3 ,sizeof(lli),cmpfunc);

    if(arr[1] !=arr[2]){
      printf("NO\n");      
    }
    else{
      printf("YES\n");
      printf("%ld %ld %ld\n", arr[0],arr[1],arr[2]);
    }
  }
  return 0;
}

