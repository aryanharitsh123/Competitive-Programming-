#include<stdio.h>
typedef long long int lli;
int max(int a, int b){
    if(a>b)
      return a;
    else
      return b;
}
int main() {
  int n;
  scanf("%d", &n);
  int arr[n];

  for(int x=0;x<n;x++){
      scanf("%d", &arr[x]);
  }

  int i=0,j=n-1,k=0;
  int ma=0;
  int sereja=0;
  int dima =0;
  while(i<=j)
  {
      if(arr[i]>=arr[j]){
          ma =arr[i];
          i++;
      }
      else{
          ma =arr[j];
          j--;
      }
      if(k%2==0){
          sereja = sereja + ma;
      }
      else{
          dima = dima + ma;
      }
      k++;
  }
  printf("%d %d\n", sereja, dima);


  return 0;
}

