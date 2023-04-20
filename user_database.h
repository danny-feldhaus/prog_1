#ifndef USER_DATABASE_H
#define USER_DATABASE_H
#include "user_node.h"
#include "user.h"
#include "rental_request.h"
#include "menu_handler.h"
#include <vector>
using std::vector;
class user_database
{
    public:
    user_database();
    ~user_database();

    void display_startup_menu();

    
    private:
    void display_login_menu();
    void display_register_menu();
    void display_user_menu();
    void display_owned_car_menu();
    void display_rent_car_menu();
    void display_rent_requests();
    void send_rent_request(unsigned int owner_id, unsigned int );   
    unsigned int highest_user_id = 0;
    user* current_user = nullptr;
    user_node* user_list = nullptr;

    user* add_user(const string & username, const string & password);
    void add_car();
    void rent_car();
    user* get_user(const unsigned int user_id);
};
#endif