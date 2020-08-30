#include<stdio.h>
typedef long long int lli;
int main(){
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
      lli k,d1,next,d2,sum=0,temp=0;
      scanf("%lld %lld %lld", &k,&d1,&d2);
      if(k>3){
          next = (d1+d2)%10;
          sum = d1+d2+next;
          while(k>3){
              k--;
              next = (next)*2%10;
              sum+=next;
              if(next==0){
                  break;
              }
              if((next==2 || next==8 || next==6 || next==4) && (k-3)%4==0)
                break;
          }
          if(next!=0)
            sum+= ((k-3)/4)*20;
      }
      else
          sum=d1+d2;
      if(sum%3==0)
        printf("YES\n");
      else
        printf("NO\n");
    }
}

