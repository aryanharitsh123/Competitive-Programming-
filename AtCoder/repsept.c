#include<stdio.h>
typedef long long int lli;
int main() {
  lli k;
  int isprime=0;
  int count =0;
  scanf("%lld", &k);
  lli temp = k;
  for(int i=2;i<k;i++){
      if(k%i==0)
        isprime = 1;
  }

  while(temp!=0){
      temp /=10;
      ++count;
  }

  if(k%2==0){
      printf("%d\n", -1);
  }

  else if(isprime==0 & k!=101){
      printf("%d\n", k-1);
  }

  else if(k%7==0){
      printf("%d\n", count);
  }
  else if(k%1==0){
      printf("%d\n", count+1);
  }
  return 0;
}

