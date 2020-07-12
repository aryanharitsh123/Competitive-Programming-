#include <stdio.h>
#include <string.h>
int main(){
    char s[1001];
    scanf("%s\n", &s);
    int l = strlen(s);
    int temp=0;

    for(int i=0;i<l;i=i+2){
        for(int j=0;j<l-2-i;j+=2){
            if(s[j]>s[j+2]){
                temp=s[j];
                s[j] = s[j+2];
                s[j+2]=temp;
            }
        }
    }

    printf("%s", s);
}