#include<stdio.h>
typedef long long int lli;
int main() {
  int n;
  scanf("%d", &n);
  int flag = 0;
  int arr[6][n];
  for(int x=0;x<n;x++){
      for(int y=0;y<5;y++){
          scanf("%c", &arr[x][y]);
      }
  }

  for(int a=0;a<n;a++){
      if(arr[a][0]=='O' && arr[a][1]=='O'){
          arr[a][0] = '+';
          arr[a][1] = '+';
          flag = 1;
          break;
      }
      else if(arr[a][3]=='O' && arr[a][4]=='O'){
          arr[a][3] = '+';
          arr[a][4] = '+';
          flag = 1;
          break;
      }
  }

  if(flag ==1){
      for(int i=0;i<=n;i++){
          for(int j=0;j<=5;j++){
              printf("%c", arr[i][j]);
          }
      }
  }
}

