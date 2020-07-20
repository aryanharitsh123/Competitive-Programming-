#include <stdio.h>
#include <math.h>
typedef long long int lli;
void sort(int *arr, lli n);
int main(){
	int testcases;
	scanf("%d", &testcases);
	while(testcases--){
		lli x,y,z;
		int arr[3];
		lli a,b,c, count=0,i,j;
		scanf("%ld %ld %ld", &x,&y,&z);

		arr[0] = x;
		arr[1] = y;
		arr[2] = z;

		sort(arr,3);

		if(arr[0]<arr[2] && arr[1] < arr[2]){
			printf("NO\n");
		}
		else{
			a = arr[0];
			b = arr[2];
			if(arr[0]==arr[1]&&arr[1]==arr[2]&&arr[2]==arr[0]){
				c = arr[0];
			}
			else{
				c =1;
			}
			printf("YES\n");
			printf("%ld %ld %ld\n", a,b,c);
		}
	}

}

void sort(int *arr, lli n){
	int i,j,temp;
	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++){
			if(arr[j]>arr[j+1]){
				temp =arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

}
