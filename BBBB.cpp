#include<iostream>
using namespace std;

int main(){
    while(1){
        int n;
        cout << "Enter a integer :";
        cin >> n;

        try{
            if(n==0){
                cout << "Try Again! ";
                continue;
            }

            else if(n%73==0) throw(1);

            else throw('A'); 
        }
        catch(int){
            cout << n*n << endl;
        }
        catch(...){
            cout << n;
            break;
        }
    }
}