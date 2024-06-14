#include<iostream>
using namespace std;
class employee{
    private:
    int empID;
    double salary;
public:
employee(){

}
 employee(int empID,double salary){
    this->empID = empID;
   this->salary = salary;
   }
int getID(){
    return empID;
}
void setID(int newID){
       empID = newID;
}

};

int main(){
    employee e1(100,1000);
    cout<<e1.getID()<<endl;
    e1.setID(200);
    cout<<e1.getID()<<endl;
}