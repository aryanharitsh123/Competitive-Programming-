#include<stdio.h>
#include<stdlib.h>
#include<math.h>
typedef long long int lli;
int main() {
  int testcases;
  scanf("%d", &testcases);
  while(testcases--){
    lli m,n;
    scanf("%ld %ld", &m,&n);
    lli root = floor(sqrt(n));
    lli initialseive[root+1];
    lli primecounter=0;

    for(lli u=0;u<=root;u++){
      initialseive[u] =u;
    }

    for(lli i=2;i<=root;i++){
      for(lli j=i*i;j<=root;j=j+i){
        initialseive[j] = 0;
      }
    }

    lli size = n-m+1;
    lli finalseive[size];
    lli a=0;
    for(lli q=m;q<=n;q++){
      finalseive[a] = q;
      a++;
    }

	for(lli x=2;x<=root;x++){
		if(initialseive[x]!=0){
			for(lli p=0;p<=size;p++){
				if(finalseive[p] !=0){
					if(finalseive[p]%initialseive[x]==0 && finalseive[p] !=initialseive[x]){
						for(lli y =p;y<=size;y=y+initialseive[x]){
							finalseive[y] = 0;
						}
					}
				}
			}
		}
	}
	
	for(lli f=0;f<size;f++){
		if(finalseive[f]!=0 && finalseive[f] !=1){
			printf("%ld ", finalseive[f]);
			printf("\n");
		}
	}
  printf("\n");
  }
  return 0;
}


