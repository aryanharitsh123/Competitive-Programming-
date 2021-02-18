#include<iostream>
using namespace std;

class student{
    public:
        string name;
        int roll;
        int sem;
        student(){
            name = "default";
            roll = 1;
            sem =1;
        }
        student(string n, int r,int s){
            name = n;
            roll = r;
            sem =  s;
        }
        void get(){
            cout << "Enter Student Name ";
            cin >> name;
            cout << "Enter Roll No ";
            cin >> roll;
            cout << "Enter Semester ";
            cin >> sem;
        }

    void copy(const student &s1)
    {
        name = s1.name;
        roll = s1.roll;
        sem = s1.sem;
    }
};

int main(){
    student s1("Abc",221,3);
    s1.sem = 4;
    student s2;
    s2.get();
    student s3 = s1;
    int n;
    cout << "Enter N ";
    cin >> n;
    student st[10];

    for(int i=0;i<n;i++){
        st[i].get();
    }
}