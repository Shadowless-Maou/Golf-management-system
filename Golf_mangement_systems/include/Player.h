#ifndef PLAYER_H
#define PLAYER_H
#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>
#include "Scorecard.h"
#include "Rental.h"



class Player
{
    public:
        Player();
        virtual ~Player();
        Player(string p,string n, int a,char g,string b,int h);
        bool Player_rental();

        void display();

        void call

        void SetPlayerInfo();

        void RecordSCoreCard();

        bool Player_scoring();


        void setHandicap(int val){handicap=val;}
        int getHandicap(){return handicap;}

        string Getpps() { return pps; }
        void Setpps(string val) { pps = val; }

        string Getname() { return name; }
        void Setname(string val) { name = val; }

        int Getage() { return age; }
        void Setage(int val) { age = val; }

        string Getgender() { return gender; }
        void Setgender(string val) { gender = val; }

        string Getbank() { return bank; }
        void Setbank(string val) { bank = val; }
        void call();
        void SetPlayerInfo();
        void RecordSCoreCard();
        bool Player_scoring();




    protected:

    private:

        int handicap;
        string pps;
        string name;
        int age;
        string gender;
        string bank;


};

#endif // PLAYER_H
