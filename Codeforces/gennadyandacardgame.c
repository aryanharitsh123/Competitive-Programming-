#include<stdio.h>
typedef long long int lli;
int main() {
  char s[2];
  scanf("%s", &s);
  char arr[14];
  int flag = 0;
  scanf("%s", &arr);

  for(int i=0;i<14;i=i+3){
      if(arr[i] == s[0]){
          flag = 1;
          break;
      }
      else{
        for(int j=1;j<14;j=j+3){
            if(arr[j] == s[1]){
                flag =1;
                break;
            }
        }
      }
  }
  
  printf("%s", arr);
  if(flag ==1){
      printf("YES\n");
  }
  else{
    printf("NO\n");
  }
  return 0;
}

