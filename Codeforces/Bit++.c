#include <stdio.h>
#include <string.h>
int main(){
    int n,x=0,i;
    scanf("%d\n", &n);

    for(i=0;i<n;i++){
        char increment[] = "++X";
        char increment2[] = "X++";
        char decrement[] = "--X";
        char decrement2[] = "X--";
        char s[4];
        scanf("%s", s);
        //int increment1 = strcmp(s,increment);
        //int decrement1 = strcmp(s,decrement);
        if(strcmp(s,increment)==0 || strcmp(s,increment2)==0){
            x++;
        }
        else if(strcmp(s,decrement)==0 || strcmp(s,decrement2)==0){
            x--;
        }
    }

    printf("%d\n", x);
}