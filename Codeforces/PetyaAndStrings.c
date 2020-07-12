#include <stdio.h>
#include <string.h>
int main(){
    char a[1001];
    char b[1001];

    scanf("%s\n", &a);
    scanf("%s\n", &b);
    int flag=0;

    int l = strlen(a);
    int ans;

    for(int i =0;i<l;i++){
        if(tolower(a[i])==tolower(b[i])){
            ans = 0;
        }
        else if(tolower(a[i])<tolower(b[i])){
            ans = -1;
            break;
        }
        else{
            ans = 1;
            break;
        }
    }

    printf("%d\n", ans);
}

//asadasdasd
//asdwasdawd