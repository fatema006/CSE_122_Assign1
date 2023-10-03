#include<bits/stdc++.h>
using namespace std;

class Person{
public:
    string name;
    int age;
    Person(){}
   Person(string name, int age){
   this->name=name;
   this->age=age;
   }

   void show(){

       cout<<"Name: "<<name<<endl;
       cout<<"Age: "<<age<<endl;

   }


};
class Employee:public Person{
public:
    int emp_Id;
    Employee(){}
    Employee(string name,int age,int emp_Id){
    this->name=name;
    this->age=age;
    this->emp_Id=emp_Id;

    }
    void display(){
      Employee::show();
     cout<<"Employee ID: "<<this-> emp_Id<<endl;

    }

    };

    class Manager:public Employee{
        public:
        string dept;
        Manager(string name,int age,int emp_Id,string dept){
            this->name=name;
            this->age=age;
            this->emp_Id=emp_Id;
            this->dept=dept;

        }

        void details(){
        Manager::display();
        cout<<"Depertment: "<<this->dept<<endl;
        }

    };



int main(){
    Person p=Person("Fatima",20);
    cout<<"Person details"<<endl;
    p.show();

    Employee emp=Employee("Piu",18,3005);
    cout<<"\n\nEmployee details"<<endl;
    emp.display();

    Manager m=Manager("Fatima Tuj Johura",23,45,"Developer");
    cout<<"\n\nEmployee details"<<endl;
    m.details();
return 0;
}


