#include<stdio.h>
typedef long long int lli;
int main() {
  int n,countoften=0,countofone=0,temp=0,max=0;
  scanf("%d", &n);
  while(n--){
    int a;
    scanf("%d", &a);
    if(a==10){
      countoften++;
      temp = countoften;
      countofone=0;
    }
    if(a==01){
      countofone++;
      temp = countofone;
      countoften=0;
    }
    if(temp>max){
      max = temp;
    }
  }

  printf("%d\n", max);


  return 0;
}

