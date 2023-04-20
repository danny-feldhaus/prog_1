#ifndef USER_NODE_H
#define USER_NODE_H
#include "user.h"
class user_node
{
    public:
    user_node(
        unsigned int id,
        const string & username,
        const string & password
    );
    ~user_node();
    user* login_user(string & username, string & password);
    user* add_user(
        unsigned int id,
        const string & username,
        const string & password);
    user* get_user(unsigned int id);
    bool username_exists(string & username) const;
    user user_data;
    user_node* next = nullptr;
};

#endif