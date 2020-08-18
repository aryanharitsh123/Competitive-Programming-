#include <stdio.h>
int main(void) {
	char s[3];
	scanf("%s", &s);
	
	if(s[0]=='R' && s[1]== 'R' && s[2]=='R'){
		printf("%d", 3);
	}
	
	else if(s[0]=='S' && s[1]== 'S' && s[2]=='S'){
		printf("%d", 0);
	}
	else if(s[0]=='R' && s[1]== 'R' && s[2]=='S'){
		printf("%d", 2);
	}
	else if(s[0]=='R' && s[1]== 'S' && s[2]=='R'){
		printf("%d", 2);
	}
	else if(s[0]=='R' && s[1]== 'S' && s[2]=='S'){
		printf("%d", 1);
	}
	else if(s[0]=='S' && s[1]== 'R' && s[2]=='S'){
		printf("%d", 1);
	}
	else if(s[0]=='S' && s[1]== 'S' && s[2]=='R'){
		printf("%d", 1);
	}
	return 0;
}


