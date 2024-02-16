#include <iostream>
#include "Player_systems.h"
#include "Staff_systems.h"

using namespace std;

int main()
{
    Player_systems ps;
    Player p;
    Staff_systems ss;
    Rental r;
    char ans;
    cout<< "Hello and welcome to the LT golf management systems " << endl
        << "Due to this program being ran for the first time"<<endl
        << "please head over to the staff systems to set up the prices"<<endl;
    do
    {
        cout<< "Would you like to go to player systems(p) or staff systems (s)"<<endl;
        cin>>ans;
        if (ans == 'p'||ans == 'P')
        {
            do
            {
                cout<< "Would you like to go to player management (p) or player equipment rental (r)"<<endl;
                cin>>ans;
                if (ans == 'p'||ans=='P')
                {

                    p.Setpps("PPSNUMBER1");
                    p.Setname("Laura");
                    p.Setage(20);
                    p.Setgender("female");
                    p.Setbank("BANKNUMBER1");
                    ps.addPlayers(p);
                    Player();
                }
                else if (ans == 'r'|| ans == 'R')
                {
                    p.Player_rental();
                }
                cout<< " would you like to go back to the start of the player systems ? Yes(y) or No(n) "<<endl;
                cin>>ans;
            }
            while(ans == 'y'||ans == 'Y');

        }
        else if (ans == 'S'||ans=='s')
        {
            // S.Staff_system_function();


        }
        cout<< " would you like to go back to the start of the main menu? Yes(y) or No(n) "<<endl;
        cin>>ans;

    }
    while(ans == 'y'||ans == 'Y');
}


