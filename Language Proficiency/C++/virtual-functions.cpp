#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

class Person{
    public:
        string name;
        int age;

        virtual void getdata()
        {
        cin>>name>>age;
        }
        virtual void putdata() 
        {
        cout<<name<<" "<<age<<"\n";
        }
};

class Professor : public Person{
    public:
        int publications, cur_id;
        static int sid;
        Professor()
        {
            cur_id = ++sid;
        }
        void getdata()
        {
            cin>>name>>age>>publications;
        }
        void putdata()
        {
            cout<<name<<" "<<age<<" "<<publications<<" "<<cur_id<<"\n";
        }
};
int Professor::sid = 0;

class Student : public Person{
    public:
        int marks[6];
        int cur_id,sum=0;
        static int sid;

        Student()
        {
            cur_id = ++sid;
        }
        void getdata()
        {
            cin>>name>>age;
            for(int i=0; i<6; i++)
            {
                cin>>marks[i];
                sum+=marks[i];
            }
        }
        void putdata()
        {
            cout<<name<<" "<<age<<" "<<sum<<" "<<cur_id<<"\n";
        }
};
int Student::sid = 0;

int main(){

    int n, val;
    cin>>n; //The number of objects that is going to be created.
    Person *per[n];

    for(int i = 0;i < n;i++){

        cin>>val;
        if(val == 1){
            // If val is 1 current object is of type Professor
            per[i] = new Professor;

        }
        else per[i] = new Student; // Else the current object is of type Student

        per[i]->getdata(); // Get the data from the user.

    }

    for(int i=0;i<n;i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}
