#ifndef SCORECARD_H
#define SCORECARD_H
#include <iostream>
using namespace std;


class Scorecard
{
    public:
        Scorecard();
        virtual ~Scorecard();
        void display();

        int Gethandicap() { return handicap; }
        void Sethandicap(int val) { handicap = val;
        void call();

        void setScore();
        void setPoints();
        void RecordSCoreCard();

    protected:

    private:
        int strokes[19];
        int score[19];
        int score_count;
        int handicap;
        int points [19];
        int pointstotal;
        int par[19]={0,4,5,3,4,4,5,3,5,3,5,3,4,4,4,4,5,4,3};
};

#endif // SCORECARD_H
