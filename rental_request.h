#ifndef RENTAL_REQUEST_H
#define RENTAL_REQUEST_H
#include <chrono>
#include <string>
using rental_time = std::chrono::time_point<std::chrono::system_clock>;

struct rental_request
{
    public:
    rental_request(
        const unsigned int renter_id, 
        const unsigned int car_id,
        rental_time & rental_start, 
        rental_time & rental_end
        );
    const unsigned int renter_id;
    const unsigned int car_id;
    const rental_time rental_start;
    const rental_time rental_end;
};
#endif