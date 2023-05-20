#ifndef DSPROJECT_BACKEND_H
#define DSPROJECT_BACKEND_H

#include <iostream>
#include <unordered_map>
#include "user.h"
#include "ticket.h"
#include <string>
#include <list>
#include <fstream>

using namespace std;

class BackEnd {
private:
    unordered_map<string, passenger> passenger_list;
    unordered_map<string, pair<string, int>> admin_list;
    unordered_map<unsigned int, train> train_list;
    unordered_map<unsigned int, trip> trip_list;
    list<string> station_list;
public:
    BackEnd();

    void save_data();

    void load_data();

    char login(string username, string password);

    int registration(string username, string password, string first_n, string last_n, char gender);

    int add_admin(string username, string pass, int pre);

    int trail();

    ~BackEnd();
};


#endif //DSPROJECT_BACKEND_H
