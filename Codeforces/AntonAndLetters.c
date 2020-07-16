#include<stdio.h>
#include<string.h>
typedef long long int lli;
int main() {
  char s[1001];
  scanf("%[^\n]%*c", s);
  char characters[1001];
  int l = strlen(s);
  int k=0;
  int arr[26];
  
  for(int i=1;i<l;i=i+3){
    characters[k]= s[i];
    k++;
  }


  for(int o=0;o<26;o++){
    arr[o] = 0;
  }
  

  int y = strlen(characters);
  
  for(int i=0;i<y;i++){
    int p = (int)characters[i];
    arr[p-'a'] = 1;
  }

  int cnt=0;

  for(int k=0;k<26;k++){
    if(arr[k] ==1){
      cnt++;
    }
  }
  
  printf("%d", cnt);

  
  return 0;
}


