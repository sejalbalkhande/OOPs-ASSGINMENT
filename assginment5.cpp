#include<iostream>
#include<string.h>
using namespace std;
class exception_handling
{
    int age,income;
    char city[20];
    char Isvehicle;
    public:
    friend istream &operator >>(istream &din,exception_handling &e)
    {
        cout<<"\n\n Enter age of person::";
        cin>>e.age;
        cout<<"\n\n Enter Income::";
        cin>>e.income;
        cout<<"\n\n Enter City ::";
        cin>>e.city;
        cout<<"\n is Vehicle(Y/N)";
        cin>>e.Isvehicle;
        return(din);
    }
    friend ostream &operator <<(ostream &dout,exception_handling &e)
    {
        try
        {
            if(e.age<18 || e.age>55)
            throw(1);
            if(e.income<50000 || e.income>100000)
            throw(2);
            if((e.city!="PUNE" || e.city!="Pune" || e.city!="pune") && (e.city!="MUMBAI" || e.city!="Mumbai" || e.city!="mumbai") && (e.city!="CHENNAI" || e.city!="Chennai" || e.city!="chennai")&& (e.city!="Bangelore" || e.city!="BANGELORE" || e.city!="bangelore"))
            throw(3);
            if(e.Isvehicle=='n' || e.Isvehicle=='N')
            throw(4);

        }
            catch(int ex)
            {
                switch(ex)
                {
                    case 1:
                        cout<<"\n Exception Caught";
                        cout<<"\n User's age should be between 18 and 55!!!";
                    break;
                    case 2:
                        cout<<"\n Exception Caught";
                        cout<<"\n User should have income between Rs.50,000-Rs.1,00,000 per month!!!";
                    break;
                    case 3:
                        cout<<"\n Exception Caught";
                        cout<<"\n User should be from Pune/ Mumbai/ Bangalore / Chennai!!!";
                    break;
                    case 4:
                        cout<<"\n Exception Cauht";
                        cout<<"\n User should have 4-wheeler!!!";
                    break;
                }
            }
            return(dout);
        }

};
int main()
{
    int ch;
    exception_handling e1;
    cout<<"\n\t============Exception Handling===============\n";
    do
    {
        cout<<"\n\n\t 1.Insert data\n\t Display Data \n\t 3.Exit\n";
        cout<<"Enter your choice";
        cin>>ch;
        switch(ch)
        {
            case 1:
                cin>>e1;
            break;
            case 2:
                cout<<e1;
            break;
            case 3:
            break;
        default:
            cout<<"Enter correct choice";
        }
    }while(ch!=3);
    return 0;
}
