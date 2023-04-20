#ifndef CAR_H 
#define CAR_H
#include <string>
using std::string;
class car
{
    public:
    car(
        unsigned int id, 
        unsigned int owner_id, 
        string make, 
        string model, 
        string year, 
        double rent
        );
    ~car();
    bool compare_id(const unsigned int id) const;
    private:
    const unsigned int id;
    const unsigned int owner_id;
    char* make;
    const string model;
    const string year;
    const double rent;
};

#endif //CAR_H