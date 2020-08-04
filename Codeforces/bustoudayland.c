#include<stdio.h>
typedef long long int lli;
int main() {
  int n;
  scanf("%d", &n);
  char arr[n][6];
  int flag= 0;
  int rowindex=0;
  int columnindex=0;

  for(int x=0;x<n;x++){
      for(int y=0;y<=5;y++){
          scanf("%c", &arr[x][y]);
      }
  }
  
  for(int i=0;i<n;i++){
      if(arr[i][1]=='O' && arr[i][2]== 'O'){
        arr[i][1] = '+';
        arr[i][2] = '+';
        flag=1;
      }

      else if(arr[i][4]=='O' && arr[i][5]=='O'){
          arr[i][4] = '+';
          arr[i][5] = '+';
          flag=1;
      }
      if(flag==1)
        break;
  
  }


  if(flag==1){
      printf("YES\n");
      for(int a=0;a<n;a++){
          for(int b=0;b<=5;b++){
              printf("%c", arr[a][b]);
          }
      }
  }
  else{
    printf("NO\n");
  }
  return 0;
}



