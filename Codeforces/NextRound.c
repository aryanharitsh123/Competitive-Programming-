#include <stdio.h>
int main(){
    int i,n,k,count=0;
    scanf("%d %d",  &n, &k);
    int arr[n];

    for(int j=0;j<n;j++){
        scanf("%d", &arr[j]);
    }

    int max = arr[k-1];

    for(i=0;i<n;i++){
        if(arr[i]>=max && arr[i] !=0){
            count++;
        }
    }

    printf("%d\n", count);



}