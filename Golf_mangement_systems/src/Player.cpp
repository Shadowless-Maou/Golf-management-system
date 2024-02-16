#include "Player.h"
#include "Rental.h"

Player::Player()
{
    pps="unknown";
    name="unknown";
    age=0;
    gender="unknown";
    bank="unknown";
    handicap=0;


    //ctor
}
bool Player::Player_scoring()
{
    Scorecard s;
    char functions,ans,anser,s,r;
    ans = 'n';
    do
    {
        cout<<endl<<"Hello "<<PlayerName<<" and Welcome to the player systems"<<endl;
        do
        {
            cout<<" what you like to do "<<endl;
            cout<<" edit points (p) or view points (v) or would you like to call up old scorecard (c)"<<endl;
            cin>> functions;
            if (functions == 'p')
            {
                setScore();
            }
            else if (functions == 'v')
            {
                display();
            }
            else if (functions == 'c')
            {
                call();
            }
            cout<<" would you like to do this again? (y) or (n)"<<endl;
            cin>> anser;
            ans = anser;
            system ("CLS");


        }
        while(ans == 'y');
        cout<<" would you like to like to go back to the start? (y) or (n)"<<endl;
        cin>> anser;
        ans = anser;
    }
    while (ans == 'y');

    cout<<"The program will now return to the main menu "<< endl;

    return ;
}
bool Player::Player_rental()
{
    Rental r;
    char functions, ans,anser;
    ans = 'n';
    do
    {
        cout<<endl<<"Hello "<<name<<" and Welcome to the player systems"<<endl
            <<"You are now in the rental system"<<endl;
        do
        {
            cout<<" what you like to do "<<endl;
            cout<<" Rental carts (c) or rental equipment (e) or  bill (b)"<<endl;
            cin>> functions;
            if (functions == 'C'||functions == 'c')
            {
                r.vehicle();
            }
            else if (functions == 'b'||functions == 'B')
            {
                cout<<"pay (p) or view bill (v)"<<endl;
                cin>>ans;
                if(ans == 'p')
                {
                   r.pay();
                }
                else if(ans == 'v')
                {
                    r.displayR();
                }
            }
            else if (functions == 'e'||functions == 'E')
            {
                r.equipment();
            }
            cout<<" would you like to do this again? (y) or (n)"<<endl;
            cin>> anser;
            ans = anser;
            system ("CLS");


        }
        while(ans == 'y');
        cout<<" would you like to like to go back to the start? (y) or (n)"<<endl;
        cin>> anser;
        ans = anser;
    }
    while (ans == 'y');

    cout<<"program has ended please hit the return key to end fully"<< endl;

    return 0;
}
void Player::display()
{
    cout<<"Player: "<<name<<"("<<age<<")"<<endl;
    cout<<"Player "<<name<<"'s handicap is "<<handicap<<endl;
}
Player::Player(string p,string n, int a,char g,string b,int h)
{
    pps=p;
    name=n;
    age=a;
    gender=g;
    bank=b;
    handicap=h;
}
Player::~Player()
{
    //dtor
}
