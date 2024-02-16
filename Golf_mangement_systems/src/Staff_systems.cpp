#include "Staff_systems.h"

Staff_systems::Staff_systems()
{
    Price1 =0;
    Price2 = 0;
    CartPrices =0;
    GolfpinPrice = 0;
    Golfball = 0;
    //ctor
}
bool Staff_systems::Staff_system_function()
{
    do
    {

        cout<<"Hello"<<endl;
        cout<< "Welcome to the staff systems. "<<endl;
        cout<< "What would you like to do ?."<<endl;
        cout<< "View players score(s) | Edit player score (e) | set Prices (p)| View player info (i)?."<<endl;
        cin>>ans;
        if (ans == 's'||ans=='S')
        {
            displayS();
        }
        else if (ans == 'e'|| ans == 'E')
        {
            setScore();
        }
        else if (ans == 'p'|| ans == 'P')
        {
            set_Price();
        }

        cout<< " would you like to go back to the start of Staff systems ? Yes(y) or No(n) "<<endl;
        cin>>ans;
    }
    while(ans == 'y'||ans == 'Y');
}
void Staff_systems::displayS()
{
    call();
}
void Staff_systems::set_Price()
{
    do
    {

        cout<<"what price would you like to set ? "<<endl;
        cout<<" golf cart (g) || golf pins and golf ball (p) || set price (s)"<<endl;
        cin>>ans;
        if(ans == 'g'||ans == 'G')
        {
            cout<<" what price would you like to set ?"<<endl;
            cin>>CartPrices;
            CartPrices = CartPrices;
        }
        else if  (ans == 'p'||ans == 'p')
        {
            cout<<" what price would you like to set ?"<<endl;
            cout<<"Golf pins = "<<endl;
            cin>>GolfpinPrice;
            GolfpinPrice = GolfpinPrice;
            cout<<"Golf ball = "<<endl;
            cin>>Golfball;
            Golfball = Golfball;

        }
        else if  (ans == 's'||ans == 'S')
        {
            cout<<" what price would you like to set ?"<<endl;
            cout<<"for Set 1 = "<<endl;
            cin>>Price1;
            Price1 = Price1;
            cout<<"for Set 2 = "<<endl;
            cin>>Price2;
            Price2 = Price2;

        }
        cout<<"woudld you like to set a different price ? yes (Y) or no (n)"<<endl;
        cin>>ans;
    }
    while(ans == 'y'||ans == 'Y');
}



Staff_systems::~Staff_systems()
{
    //dtor
}
