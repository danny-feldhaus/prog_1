#ifndef EXCAVATOR_H
#define EXCAVATOR_H
#include "car.h"

enum movement_type
{
    tracks,
    wheeled,
};

class excavator : public car {
    private:
    const movement_type my_movement_type;
};


#endif //EXCAVATOR_H