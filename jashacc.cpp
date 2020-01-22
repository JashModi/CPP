#include<iostream>
#include<string>
using namespace std;
class bank
{
    string bankname="BOB";
    long accountnum;
    double balance;
public:
    void banksetter()
    {
        //cout<<"Enter bank name";
        //cin.get();
        //getline(cin,bankname);
        cout<<"Enter Account number";
        cin>>accountnum;
        cout<<"Enter Account Balance";
        cin>>balance;
    }
    void depositBalance(double d)
    {
        balance += d;
    }
    void withdrawBalance(double d)
    {
        balance -= d;
    }
    long getAcno()
    {
        return accountnum;
    }
    double getBalance()
    {
        return balance;
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
        cin.get();
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

        double deposit;
        cout<<"Enter the amount Deposited"<<endl;
        cin>>deposit;
        if(deposit>0)
        {
            depositBalance(deposit);
            cout<<getBalance();
        }
        else
        {
            cout<<"Invalid";
        }
    }
    void withdraw()
    {

        double withdraw;
        cout<<"Enter the amount Withdrawn"<<endl;
        cin>>withdraw;
        if(withdraw>getBalance()||withdraw<0)
        {

            cout<<"Invalid Amount Try Again";
        }
        else
        {
            withdrawBalance(withdraw);
            cout<<getBalance();
        }
    }

};

main()
{
    int tacno;
    char yes;
    char ops;
    char ask;

    customer c[3];
    for(int i=0; i<3; i++)
    {
        c[i].banksetter();
        c[i].personalsetter();
    }

    do
    {
        cout<<"Enter ac no.:\n";
        cin>>tacno;
        bool flag = false;
        for(int i=0; i<3 ; i++)
        {
            if(c[i].getAcno() == tacno)
            {
                flag=true;
                do
                {
                    cout<<"What you want to do ?"<<"\n"<<"1. deposit"<<"\n"<<"2. Withdraw"<<endl;
                    cin>>ops;
                    switch(ops)
                    {
                    case'1':
                            c[i].deposit();
                        break;
                    case'2':
                            c[i].withdraw();
                        break;
                    default:
                        cout<<"Invalid";
                    }
                    cout<<"Do you want to continue ?"<<"\n"<<"Press Y or y to continue"<<endl;
                    cin>>yes;
                }
                while(yes=='y'||yes=='Y');
            }

        }
        if(!flag)
        {
            cout<<"NO ac No found";
        }
        cout<<"Do You want to continue Another session ?"<<endl;
        cin>>ask;
    }
    while(ask=='y'||ask=='Y');



}
