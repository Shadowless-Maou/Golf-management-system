#ifndef PLAYER_SYSTEMS_H
#define PLAYER_SYSTEMS_H
#include "Player.h"
#include "Rental.h"


class Player_systems
{
    public:
        Player_systems();
        virtual ~Player_systems();
        void addPlayers(Player p1);
        void display();

        string Getlocation() { return location; }
        void Setlocation(string val) { location = val; }

        int Gettime() { return time; }
        void Settime(int val) { time = val; }

        string Getdate() { return date; }
        void Setdate(string val) { date = val; }




    protected:

    private:

        Player players[20];
        int player_counter;
        string location;
        int time;
        string date;

};

#endif // PLAYER_SYSTEMS_H
