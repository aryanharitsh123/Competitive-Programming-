#include<stdio.h>
typedef long long int lli;

long fact(int num){
  if(num==0)
  {
    return 1;
  }

  else{
    return num* fact(num -1);
  }
} 

int main() {
  lli n,k,t=0,p,i,j,rank1=0,rank2=0;
  scanf("%d", &n);
  lli x[n];
  lli y[n];
  lli factorial[n];
  lli boolean[n+1];
  
  //Taking Input.

  for(k=0;k<n;k++){
    scanf("%ld", &x[k]);
  }

  for(k=0;k<n;k++){
    scanf("%ld", &y[k]);
  }

  //Initializing a boolean array.

  for(k=0;k<n;k++){
    boolean[k] = 0;
  }

  //Precomputing an array of factorials.
  lli temp=0;
  for(j=0;j<=n;j++)
  {
    temp = fact(j);
    factorial[t] = temp;
    t++;
  }
  
  //Checking for rank of a permutation. O(n^2).
  
  for(i=0;i<n;i++)
  { 
    lli cnt=0;
    lli o=1;
    for(j=1;j<x[i];j++){
      if(boolean[j]==0){
        cnt++;
      }
      boolean[x[i]]=1;
    }
    rank1 = cnt * factorial[(n-o)]+ rank1;
    o++;
  }

  printf("%ld", rank1);
  

  return 0;
}

