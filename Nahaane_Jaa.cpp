#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t,n,k;
	cin>>t;
	while(t--){
	    cin>>n>>k;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    int c=0;
	   for(int i=0;i<n;i++){
	        if(arr[i]==k){
	            c++;
	        }
	    }
	      if(c==0){
	        cout<<"NO"<<endl;
	    }
	    else if(c==1 && arr[n-1]==k && n!=1){
	        cout<<"NO"<<endl;
	    }
	    else{
	        cout<<"YES"<<endl;
	    }
	}
	return 0;
}