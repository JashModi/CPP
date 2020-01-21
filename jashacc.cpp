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
public:
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

class customer: public bank,public personal
{
public:
    void deposit()
    {

        int deposit;
        cout<<"Enter the amount Deposited"<<endl;
        cin>>deposit;
        balance+=deposit;
        cout<<balance;

    }
    void withdraw()
    {

        int withdraw;
        cout<<"Enter the amount Withdrawn"<<endl;
        cin>>withdraw;
        balance+=withdraw;
        cout<<balance;

    }

};

main()
{

    customer c;
    c.banksetter();
    c.bankname;
    c.accountnum;
    c.balance;
    c.personalsetter();
    c.personname;
    c.age;
    c.deposit();
    c.withdraw();

}
