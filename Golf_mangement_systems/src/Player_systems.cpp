#include "Player_systems.h"
#include "Player.h"
Player_systems::Player_systems()
{
    players[20];
    player_counter=0;
    string location="unknown";
    int time=0;
    string date="unknown";
    Player p;
    p.display();

    //ctor
}
void Player_systems::addPlayers(Player p1){
    int x;
    if (player_counter<=20){
    players[player_counter] = p1;
    cout<<"Please insert the handicap of this player"<<endl;
    cin>>x;
    p1.setHandicap(x);
    player_counter++;
}
}
void Player_systems::display(){
        for(int i=0;i<player_counter;i++){
            p[i].display();

        }

}


Player_systems::~Player_systems()
{
    //dtor
    player_counter--;
}
