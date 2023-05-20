#ifndef DSPROJECT_USER_H
#define DSPROJECT_USER_H

#include <string>
#include "ticket.h"
#include <list>

using namespace std;


class passenger {
private:
    string password;
    string first_name;
    string last_name;
    char gender;
    list<unsigned int > reserved_trips;
public:
    //region passenger methods
    //constructor
    passenger();

    passenger(string Password, char Gender, string firstName, string lastName);

    //#####################################
    //getters

    string getPassword();

    char getGender();

    string getFirstName();

    string getLastName();
    //##################################
    //Setters
    void setPassword(string password);

    void setFirstName(string firstName);

    void setLastName(string lastName);

    void setGender(char gender);
    //#########################################
    //linked list
    void reserve_a_ticket(unsigned int ticket_number);

    list<unsigned int > return_all_list();
    //#########################################
    //endregion
};

#endif //DSPROJECT_USER_H
