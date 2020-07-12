#include <stdio.h>
typedef long long int lli;
int deleteElement(lli arr[], int n, int x);
int main(){
    lli n,m,k,count=0,min=0,ans=0,large=0,j=0;;
    scanf("%lld %lld %lld", &n , &m, &k);
    if(n>m){
        large=n;
    }
    else{
        large=m;
    }
    lli A[n];
    lli B[m];

    for(lli o=0;o<n;o++){
        scanf("%lld", &A[o]);
    }    

    for(lli p=0;p<n;p++){
        scanf("%lld", &B[p]);
    }

    for(lli i=0;i<m+n;i++){
        if(A[j]>B[i]){
            min = B[i];
            deleteElement(B, m, B[i]);
        }
        else{
            min = A[j];
            deleteElement(A, n, A[j]);
            j++;
        }
        ans = min +ans;
        if(ans<k){
            count++;
        }
    }
    printf("%lld\n", count);
}


int deleteElement(lli arr[], int n, int x){
    int i;
    for(i=0;i<n;i++){
        if(arr[i] == x){
            break;
        }
    }

    if(i<n){
        n=n-1;
        for(int j=i;j<n;j++){
            arr[j] = arr[j+1];
        }
    }

    return n;
}
