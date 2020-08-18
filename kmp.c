#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef long long int lli;

int KMP(const char *x, const char *y,int m, int n)
{
    if(*y == '\0' || n==0)
      printf("Pattern occurs with shift 0");
    
    if(*x == '\0' || n>m)
      printf("pattern not found");
    
    int next[n+1];
    
    for(int i=0;i< n+1;i++){
        next[i] = 0;
    }
    
    for(int i=1;i <n;i++)
    {
        int j= next[n+1];

        while(j>0 && y[j] != y[i])
          j = next[j];

        if(j> 0 || y[j] == y[i])
          next[i+1] = j+1;
    }
    int count=0;
    for(int i=0,j=0;i<m;i++){
        if (*(x+i)== *(y+j))
        {
            if(++j ==n)
              count++;
        }
        else if(j>0){
            j=next[j];
            i--;
        }
    }
    if(count>0)
      printf("%d", count);
}

int main() {
  char p[100000], t[100000];
  scanf("%s", &p);
  scanf("%s", &t);
  int m = strlen(t);
  int n = strlen(p);
  KMP(t,p,m,n);
}

