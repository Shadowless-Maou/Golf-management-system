#ifndef RENTAL_H
#define RENTAL_H

#include <iostream>
#include <string>
#include <fstream>
#include <stdlib.h>

class Rental
{
public:
    Rental();
    virtual ~Rental();
    bool vehicle();
    bool equipment();
    bool displayR();
    bool pay();



protected:

private:
    float Price;
    float A1,A2,A3,A4;
    float Total,total,unpaid,Unpaid,Paid,paid,V,v,E,e;



};

#endif // RENTAL_H
