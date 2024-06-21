//same entity behaving diffrently in diiferent secenarios 
//two types- 1- compile time polymorphism 2- Run time Polymorphism
//COmpile time polymorphism include -- Function overloading
//example
/*#include<iostream>
using namespace std;
class count{
    private:
    int value;
   public:
    count(){
        value=5;
          }
          void operator ++(){
            value +=10;
            
          }  
 
void display(){
        cout<<"cout"<<value<<endl;
    }
};
int main(){
    count c1;
      c1.display();
    ++c1;
    c1.display();
}
*/
//Run time polymorphism
//we make a virtual function and ovveride that function
#include<iostream>
using namespace std;
class Base{
public:
  virtual void print(){
    cout<<"from base"<<endl;
}
};
class Derived: public Base{
    public:
    void print() override{
    cout<<"from derived"<<endl;
}
};
int main(){
    Derived d1;
    Base*ptr=&d1;
    ptr->print(); 
    }