#ifndef USER_H
#define USER_H
#include "car_node.h"
#include "rental_request.h"
#include <string>
#include <vector>

class user
{
    public:
    user(
        unsigned int id,
        const string & username,
        const string & password
        );
    ~user();
    bool compare_id(unsigned int other_id) const;
    bool compare_password(const string & password) const;
    bool compare_username(const string & username) const;
    /**
     * @brief Add a new request to rent the car
     * @param renter_id the user id of the requesting renter
     * @param car_id the id of the requested car
     */
    void add_rental_request(
        unsigned int renter_id,
        unsigned int car_id,
        rental_time & rental_start,
        rental_time & rental_end
    );
    car_node* get_owned_cars();
    private:
    static unsigned int hash_password(const string & password);

    const string username;
    const unsigned int password_hash;
    const unsigned int id;
    car* rented_car = nullptr;
    car_node* owned_cars = nullptr;
    std::vector<rental_request> rental_requests = std::vector<rental_request>();
};
#endif //USER_H