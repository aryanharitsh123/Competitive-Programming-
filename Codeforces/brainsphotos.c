#include<stdio.h>
typedef long long int lli;
int main() {
  int n,m;
  scanf("%d %d", &n, &m);
  char arr[n][m];
  int i,j,x,y;

  for(i=0;i<n;i++){
      for(j=0;j<m;j++){
          scanf("%c", &arr[i][j]);
      }
  }

  for(x=0;x<n;x++){
      for(y=0;y<m;y++){
        if(arr[x][y]=='C'|| arr[x][y]=='M' || arr[x][y]=='Y'){
            printf("#Color\n");
            return 0;
        }
      }
  }

  printf("#Black&White\n");
  return 0;
}


