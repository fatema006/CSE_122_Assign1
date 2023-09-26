
 #include<iostream>
 using namespace std;
 #define endl '\n'

 class student {
    protected:
        int id;
        string name;

    public:
        void get() {
            cout<<"Enter id: "<< endl;
             cin>> id;

            cout<<"Enter name: " << endl;
            cin>> name;

        }

        void disp()  {
            cout<<"Name: " << name << endl;
            cout<< "id Is: " << id << endl;
        }
 };


 class course : public student {
     int course_id;
    public:
        void get() {
            student :: get();
            cout<<"Enter course id :" << endl;
            cin>> course_id;

        }

        void disp() {
            student :: disp();
            cout<<"course id is: "<< course_id << endl;
        }
 };

 int main() {
     course c;
     c.get();
     c.disp();


     return 0;
 }
