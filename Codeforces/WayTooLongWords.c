#include <stdio.h>
#include <string.h>
int main(){
    int testcases;
    scanf("%d\n", &testcases);
    //testing
    while(testcases--){
        char s[10001];
        int l,count;
        scanf("%s", &s);
        l = strlen(s);

        if(l<=10){
            printf("%s\n \n", s);
        }

        else{
            printf("%c%d%c\n", s[0], l-2,s[l-1]);
        }
    }
}