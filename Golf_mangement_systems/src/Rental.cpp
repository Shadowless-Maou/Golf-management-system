#include "Rental.h"
using namespace std;
Rental::Rental()
{
    Price = 0;
    unpaid = 0;
    paid = 0;
    Price = CartPrices;
    Total = V + E;
    total = Total;
    unpaid = total - paid;
    //ctor
}


bool Rental::vehicle()
{
    double NumCart;
    cout<<"how many golf cart would you like to rental out ?"<<endl;
    cin>>NumCart;
    if(NumCart > 0 && NumCart <7 )
    {
        cout<<"The cost of renting a golf cart at this golf course is "<<Price<<endl;
        cout<<"would you confirm again that you have agreed to rental out "<<NumCart<<" cart ? Yes (y) or No(n)"<<endl;
        cin>>ans ;
        if (ans == 'y'|| ans == 'Y')
        {
            V = NumCart*Price;
            cout<<"This would total out to be "<<V<<endl;
            system("PAUSE");

        }
        else if (ans == 'n'|| ans == 'N')
        {
            V = 0;
        }
    }
    else if (NumCart < 0||NumCart >10)
    {
        cout<<"you have not requested any valid amount of cart"<<endl;
    }
    system ("CLS");
}
bool Rental::equipment()
{

    do
    {
        cout<<"What would you like to rental out"<<endl;
        cout<<"equipment set (s), consumables (c)"<<endl;
        cin>>ans;
        system("CLS");
        if (ans == 's'||ans == 'S')
        {
            do
            {
                cout<<"There are  set available for rental"<<endl;
                cout<<""<<endl;
                cout<<"Set 1 include :"<<endl
                    <<"Full Standard Golf club set"<<endl
                    <<"Set of 6 golf balls"<<endl
                    <<"A dozen golf pins"<<endl
                    <<" set price at 90 euro"<<endl;

                system("PAUSE");

                system("CLS");
                cout<<"Set 2 include :"<<endl
                    <<"Set of 6 golf balls"<<endl
                    <<"A dozen golf pins"<<endl
                    <<" set price at 20 euro"<<endl;

                system("PAUSE");

                system("CLS");
                cout<<" would you like to read through the sets again ? Yes (y) or No (n)"<<endl;
                cin>>ans;
            }
            while(ans == 'y'||ans == 'Y');
            cout<<"which set would you like ?"<<endl;
            cin>>ans;
            if(ans == '1')
            {
                A1 = Price1;
            }
            else if (ans== '2')
            {
                A1 = Price2;
            }
        }
        else if (ans == 'c'||ans == 'C')
        {
            cout<<"There are  set of consumables available for rental"<<endl;
            cout<<"These are set of 4 golf  balls(8.50)and a set of half-a-dozen golf pins(3)"<<endl;
            cout<<"how many golf balls set do you want ?"<<endl;
            cin>>A3;
            cout<<"how many golf pins set do you want ?"<<endl;
            cin>>A4;

            A2 = (A3*Golfball) +(A4*GolfpinPrice);

        }
        E = A1 + A2;
        cout<<"would you like to go back to the rental menu ? Yes (y) or No(n)"<<endl;
        cin>>ans;
        system("ClS");
    }
    while(ans == 'y'||ans == 'y');
}
bool Rental::pay()
{
    paid = 0;
    cout<<"would you like to pay now ? Yes(y) or No (n)"<<endl;
    cin>>ans;
    if(ans == 'y'||ans == 'y')
    {
        cout<<"how much would you like to pay ?"<<endl;
        cin>>paid;
    }
}
void Rental::displayR()
{
    cout<<"your total bill is "<<unpaid<<endl;
}

Rental::~Rental()
{
    //dtor
}
