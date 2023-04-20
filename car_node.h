#ifndef CAR_NODE_H
#define CAR_NODE_H
#include "car.h"
class car_node {
    public:
    car* get_car(unsigned int id);
    car* add_car(unsigned int id);
    private:
    car car_data;
    car_node* next;
};
#endif //CAR_NODE_H