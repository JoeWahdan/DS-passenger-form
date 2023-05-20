#include "user.h"
#include "ticket.h"

//region class passenger
//constructor
passenger::passenger() {}

passenger::passenger(string Password, char Gender, string firstName,
    string lastName) {
    password = Password;
    gender = Gender;
    first_name = firstName;
    last_name = lastName;
}
//###########################################
//getters
string passenger::getPassword() {
    return password;
}

string passenger::getFirstName() {
    return first_name;
}

string passenger::getLastName() {
    return last_name;
}

char passenger::getGender() {
    return gender;
}

//#################################################
//setters
void passenger::setPassword(string password) {
    passenger::password = password;
}

void passenger::setFirstName(string firstName) {
    first_name = firstName;
}

void passenger::setLastName(string lastName) {
    last_name = lastName;
}

void passenger::setGender(char gender) {
    passenger::gender = gender;
}

//#################################################
//linked list methods
void passenger::reserve_a_ticket(unsigned int ticket_number) {
    reserved_trips.push_back(ticket_number);
}

list<unsigned int> passenger::return_all_list() {
    return reserved_trips;
}
//#############################################
//endregion
