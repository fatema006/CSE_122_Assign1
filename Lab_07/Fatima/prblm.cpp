#include<bits/stdc++.h>
using namespace std;

class vechicle{
public:
    string model;
    int year;

    void display(){
    cout<<"Model:"<<model<<endl;
    cout<<"Year:"<<year<<endl;
    }
};


class car {
public:
    string clr;
    int weight;

    void display() {
    cout<<"Color:"<<clr<<endl;
    cout<<"Weight:"<<weight<<endl;
    }

};

class motorcycle {
    public:
    string clr;
    int weight;

    void display() {
    cout<<"Color:"<<clr<<endl;
    cout<<"Weight:"<<weight<<endl;
   }

};



int main(){
     vechicle v;
    v.model="Toyota";
    v.year=2012;
    v.display();


    car c;
    c.clr="Black";
    c.weight=780;
    c.display();

    motorcycle m;
    m.clr="Yello";
    m.weight=334;
    m.display();

    return 0;
}

