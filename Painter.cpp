#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	for(int x = 1; x<=t;x++){
		long long int score = 0;
		int n;
		cin>>n;
		string s;
		cin>>s;
		if(s[0] == 'R'|| s[0] =='B' || s[0] =='Y'){
			score+=1;
		}
		else if(s[0] == 'O'|| s[0] =='P' || s[0] =='G'){
			score+=2;
		}
		else if(s[0] =='A'){
			score+=3;
		}
		for(int i = 1;i<n;i++){
			if(s[i]!='U'){
				if(s[i] != s[i-1]){
					if(s[i] == 'O'){
						if(s[i-1] == 'R' || s[i-1] =='Y'){
							score+=1;
							continue;	
						}
						else{
							score+=2;
						}
					}
					if(s[i] == 'G'){
						if(s[i-1] == 'B' || s[i-1] =='Y'){
							score+=1;
							continue;	
						}
						else{
							score+=2;
						}
					}
					if(s[i] == 'P'){
						if(s[i-1] == 'B' || s[i-1] =='R'){
							score+=1;
							continue;	
						}
						else{
							score+=2;
						}
					}
					if(s[i] == 'A'){
						if(s[i-1] == 'R' || s[i-1] == 'B' || s[i-1] == 'Y'){
							score+=2;
							continue;
						}
						if(s[i-1] == 'O' || s[i-1] == 'G' || s[i-1] == 'P'){
							score+=1;
							continue;
						}
					}
					
					if(s[i] =='R'){
						if(s[i-1] == 'Y' || s[i-1] == 'B'){
							score+=1;
						}
					}
					
					if(s[i] =='Y'){
						if(s[i-1] == 'B' || s[i-1] == 'B'){
							score+=1;
						}
					}
					
					if(s[i] =='B'){
						if(s[i-1] == 'Y' || s[i-1] == 'R'){
							score+=1;
						}
					}
				}
				
			}
		}
		
		cout<<"Case #"<<x<<": "<<score<<endl;
		
	}
	
	
	
	return 0;
}