#ifndef MENU_HANDLER_H
#define MENU_HANDLER_H
#include <vector>
#include <string>
#include <iostream>
using std::vector;
using std::string;
using std::cout;
class menu_handler
{
    public:
    static unsigned int choose_from_options(const vector<string> & options);
    static unsigned int choose_uint(const string & message, unsigned int min, unsigned int max);
};

#endif