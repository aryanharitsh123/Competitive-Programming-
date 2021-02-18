#include<iostream>
using namespace std;

class complex{
    public:
        int real;
        int imag;
        complex(){
            imag=0;
            real=0;
        }
        complex(int i,int r){
            real = r;
            imag = i;
        }

        complex operator +(complex c){
            complex temp;
            temp.real=real+c.real;
            temp.imag = imag+c.imag;
            return temp;
        }

        void print(){
            cout << real << " + " << imag << "i" << endl;
        }
};

int main(){
    complex obj1(5,4);
    complex obj2(3,4);
    complex obj3;
    obj3 = obj1+obj2;
    obj3.print();

}