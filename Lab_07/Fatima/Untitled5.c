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
class car:public vechicle{
public:
    string clr;
    int weight;
    car::display();
    void display()
    cout<<"Color:"<<clr<<endl;
    cout<<"Weight:"<<weight<<endl;
};

class motorcycle: public vechicle{
    public:
        motorcycle::display();

};



int main(){
    vehicle v;
    v.model="Toyota";
    v.year=2012;cout<<"Model:"<<model<<endl;
    v.display();

    return 0;
}
