#ifndef DUMP_TRUCK_H
#define DUMP_TRUCK_H
#include "car.h"
class dump_truck : public car
{
    private:
    float max_volume_cubic_meters;
    float max_weight_kg;
};
#endif //DUMP_TRUCK_H