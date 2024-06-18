/*#include <iostream>
using namespace std;

class Student {
private:
    string name;
    int rollno;
    int age;
    char grade;

public:
  string getName(){
        return name;
    }

    int getRollNo(){
        return rollno;
    }
   int getAge() {
        return age;
    }
   char getGrade() {
        return grade;
    }
  void setName(string newName){
        name = newName;
    }

    void setRollNo(int newRollNo) {
        rollno = newRollNo;
    }

    void setAge(int newAge) {
        age = newAge;
    }
   void setGrade(char newGrade) {
grade = newGrade;
    }
};

int main() {
    Student s1;
    s1.setName("Chirag Joshi");
    s1.setAge(22);
    s1.setRollNo(47);
    s1.setGrade('A');

    cout <<"Name:"<< s1.getName() << endl;
    cout <<"Age:"<< s1.getAge() << endl;
    cout <<"Roll No:"<< s1.getRollNo() << endl;
    cout <<"Grade:"<< s1.getGrade() << endl;
    
    return 0;
}

//inheritance 
#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"eating"<<endl;
    }
};
class dog: public Animal{
    public:
    void bark(){
        cout<<"barking"<<endl;
    }
};
int main(){
    dog d1;
    d1.bark();
    d1.bark();
}*/
#include <iostream>
using namespace std;

class Animal{
public:
    void eat(){
        cout <<"Eating"<< endl;
    }
};
class Dog : public Animal {
public:
void bark() {
cout << "Barking" << endl;
}
};
class Cat : public Animal {
public:
void meow() {
cout<<"Meowing"<< endl;
}
};
int main() {
    Dog d1;
    Cat c1;

    d1.eat(); // Inherited method from Animal class
    d1.bark();// Method of Dog class

    c1.eat(); // Inherited method from Animal class
    c1.meow();// Method of Cat class
    return 0; 
  }