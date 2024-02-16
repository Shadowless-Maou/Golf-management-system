#ifndef STAFF_SYSTEMS_H
#define STAFF_SYSTEMS_H
#include "Rental.h"
#include "Scorecard.h"

class Staff_systems
{
public:
    Staff_systems();
    virtual ~Staff_systems();
    bool Staff_system_function();
    void displayS();
    void set_Price();
    void player_info();

protected:

private:
    float Price1,Price2,CartPrices, GolfpinPrice,Golfball;
    float Price;
};

#endif // STAFF_SYSTEMS_H
