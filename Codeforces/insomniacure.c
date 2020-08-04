#include<stdio.h>
typedef long long int lli;
int main() {
  int  k,l,m,n,d;
  scanf("%d\n %d\n %d\n %d\n %d",&k,&l,&m,&n,&d);
  int arr[d];
  
  for(int x=0;x<=d;x++){
      arr[x] = x;
  }

  for(int i=k;i<=d;i=i+k){
      arr[i] =-1;
  }

  for(int i=l;i<=d;i=i+l){
      arr[i] = -1;
  }

  for(int i=m;i<=d;i=i+m){
      arr[i] = -1;
  }

  for(int i=n;i<=d;i=i+n){
      arr[i] = -1;
  }
  int count=0;
  for(int x=1;x<=d;x++){
      if(arr[x]==-1){
          count++;
      }
  }

  printf("%d\n", count);

  return 0;
}

