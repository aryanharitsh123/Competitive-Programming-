#include<stdio.h>
#include<string.h>
typedef long long int lli;
int main() {
  int arr[4];
  lli sum=0;

  for(int x=0;x<4;x++){
      scanf("%d", &arr[x]);
  }

  char s[100000];
  scanf("%s", &s);
  int l= strlen(s);
  for(lli i=0;i<l;i++){
      if(s[i] == '1'){
          sum = sum + arr[0] ;
      }
      else if(s[i]=='2'){
          sum = sum + arr[1];
      }
      else if(s[i]=='3'){
          sum = sum+ arr[2];
      }
      else{
          sum = sum+ arr[3];
      }
  }

  printf("%lld\n",sum);

  return 0;
}

