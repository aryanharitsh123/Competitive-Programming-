#include<stdio.h>
typedef long long int lli;
int main() {
  char arr[9][9];
  int white=0;
  int black=0;
  
  for(int i=0;i<8;i++){
      for(int j=0;j<8;j++){
          scanf("%c", &arr[i][j]);
      }
  }
  
  for(int i=0;i<=8;i++){
      for(int j=0;j<=8;j++){
          if(arr[i][j] =='Q')
            white=white+9;
          else if(arr[i][j]=='R')
            white = white + 5;
          else if(arr[i][j]=='B')
            white = white + 3;
          else if(arr[i][j]=='N')
            white = white + 3;
          else if(arr[i][j]=='P')
            white = white +1;
          else if(arr[i][j]=='q')
            black = black + 9;
          else if(arr[i][j]=='r')
            black = black + 5;
          else if(arr[i][j]=='b')
            black = black + 3;
          else if(arr[i][j]=='n')
            black = black +3;
          else if(arr[i][j]=='p')
            black = black + 1;
      }
  }

  /*if(white>black)
    printf("White\n");
  else if(white<black)
    printf("Black\n");
  else if(black==white)
    printf("Draw\n");*/

  printf("%d %d", black, white);



}

