#include<iostream>
using namespace std;
class student{
    public:
    int rollno;
 string name;
 student(string x,int r){
    name =x;
    rollno = r;
 }
};
int main(){
    student s("chirag",17);
    cout<<"name of the student is " <<s.name<<endl;
    cout<<"roll no of thse student is "<<s.rollno<<endl;

}