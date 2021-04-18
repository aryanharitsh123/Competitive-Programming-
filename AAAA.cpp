#include<iostream>
using namespace std;

class recurisve{
    public:
        int n;
        int m=0;
        virtual int fibonacci(int n){
            if (n == 0 || n == 1)
                return n;
            else
                return (fibonacci(n-1) + fibonacci(n-2));
        }
        virtual void output(int n){
            for (int i = 1; i <= n; i++){
                cout<<" "<<fibonacci(m);
                m++;
            }
        }
};

int main(){
    recurisve a;
    a.output(6);
}