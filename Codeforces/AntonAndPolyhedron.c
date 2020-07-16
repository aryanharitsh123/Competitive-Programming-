#include<stdio.h>
#include <string.h>
typedef long long int lli;
int main(){
  lli n,count=0;
  scanf("%ld", &n);
  for(int i=0;i<n;i++){
    char s[100];
    scanf("%s", &s);
    int tetra = strcmp(s,"Tetrahedron");
    if(tetra==0){
      count = count + 4;
    }
    int cu = strcmp(s, "Cube");
    if(cu==0){
      count = count + 6;
    }
    int octa = strcmp(s, "Octahedron");
    if(octa==0){
      count = count + 8;
    }
    int Dode = strcmp(s, "Dodecahedron");
    if(Dode==0){
      count = count  + 12;
    }
    int Ico = strcmp(s,"Icosahedron");
    if(Ico==0){
      count = count + 20;
    }
   // printf("%ld\n", count);
  }

  printf("%ld", count);
  
  return 0;
}
