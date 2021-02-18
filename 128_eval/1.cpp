#include<iostream>
using namespace std;

class message{
    string from;
    string to;
    string text;
    int time_stamp;
    string mess; 
    string temp;
    public :
        message(){
            cout << "Enter the name of Sender ";
            cin >>from;
            cout << "Enter the name of Recipient ";
            cin >> to;
            mess = from +  " at 11:05 to  " + to + " ::";
        }
        void display(string temp){
            cout << mess + temp << endl;
        }
};

int main(){
    message obj1;
    cout << "Enter Message ";
    string temp;
    obj1.display(temp);
}