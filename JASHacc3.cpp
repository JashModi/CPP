#include<iostream>
#include<string>
using namespace std;

class person
{
    string name;
    int age;
    float salary;
public:
    void personsetter()
    {
        cout<<"Enter Name of Person"<<endl;
        getline(cin,name);
        cout<<"Enter Age of Person"<<endl;
        cin<<age;
        cout<<"Enter Salary of Person"<<endl;
        cin>>salary;
    }

    string nameG()
    {
        return name;
    }
    int ageG()
    {
        return age;
    }
    float salaryG()
    {
        return salary;
    }
};
main(){

person p;
p.personsetter();
p.nameG();
p.ageG();
p.salaryG();
}
