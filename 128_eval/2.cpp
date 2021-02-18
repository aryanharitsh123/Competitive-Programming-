#include<iostream>
using namespace std;
class employee{
    private:
        int salary;
        public:
            employee(int val){
                salary = val;
            }
            employee(employee &e){
                salary=e.salary;
            }
            void display(){
                cout << salary << endl;
            }
};
int main(){
    employee e1(4500);
    employee e2(e1);
    employee e3=e2;
    cout<<"Salary of  employee1 :";e1.display();
    cout<<"Salary of  employee2 :";e2.display();
    cout<<"Salary of  employee3 :";e3.display();
    return(0);
}