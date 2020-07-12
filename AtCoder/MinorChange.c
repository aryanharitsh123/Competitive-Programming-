#include <stdio.h>
#include <string.h>
int main(){
    char s[1000000],t[1000000];
    scanf("%s\n", &s);
    scanf("%s\n", &t);
    int count=0,l=0,i;
    l = strlen(s);

    for(i=0;i<l;i++){
        if(s[i] != t[i]){
            count++;
        }
    }

    printf("%d\n", count);

}