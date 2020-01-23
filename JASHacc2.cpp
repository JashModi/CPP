#include<iostream>
#include<string>
using namespace std;
class person
{

    char name[30];
    int age;
public:
    void personsetter()
    {

        cout<<"Enter name of person"<<endl;
        cin>>name;
        cout<<"Enter age of person"<<endl;
        cin.get();
        cin>>age;
    }
};
class student: public person
{
    float percentage;
    int studentid;
public:
    void studentsetter()
    {
        cout<<"Details Of Student"<<endl;
        person::personsetter();
        cout<<"Enter ID of student"<<endl;
        cin>>studentid;
        cout<<"Enter percentage of student"<<endl;
        cin>>percentage;
    }
};
class teacher:public person
{

    float salary;
public:
    void teachersetter()
    {
        cout<<"Details Of Teacher"<<endl;
        person::personsetter();
        cout<<"Enter Salary of student"<<endl;
        cin>>salary;
    }
};

main(){

student s;
s.studentsetter();
teacher t;
t.teachersetter();



}
