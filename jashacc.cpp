#include<iostream>
#include<string>
using namespace std;
class bank
{
public:
    string bankname;
    long accountnum;
    double balance;

    void banksetter()
    {

        cout<<"Enter bank name";
        getline(cin,bankname);
        cout<<"Enter Account number";
        cin>>accountnum;
        cout<<"Enter Account Balance";
        cin>>balance;
    }
};

class personal
{

    string personname;
    int age;
    void personalsetter()
    {

        cout<<"Enter person name";
        getline(cin,personname);
        cout<<"Enter Age";
        cin>>age;
    }
};

class customer: public bank,public personal{

void deposit(){


}

};
