#include "ticket.h"
//region train class
//constructor
train::train(string trainName, unsigned int trainNumber, int noOfSeats) {
    train_name = trainName;
    train_number = trainNumber;
    no_of_seats = noOfSeats;
}
train::train() {}
//####################################
//getters
string train::getTrainName() {
    return train_name;
}

unsigned int train::getTrainNumber() {
    return train_number;
}

int train::getNoOfSeats() {
    return no_of_seats;
}
//######################################
//setters
void train::setTrainName(string trainName) {
    train_name = trainName;
}

void train::setTrainNumber(unsigned int trainNumber) {
    train_number = trainNumber;
}

void train::setNoOfSeats(int noOfSeats) {
    no_of_seats = noOfSeats;
}
//####################################
//endregion



//region trip class
//constructor
trip::trip(unsigned int trip_no, unsigned int train, string boarding_p, string destination_p, float tic_price, date dd, date ad)
{
    trip_number = trip_no;
    train_number = train;
    boarding_point = boarding_p;
    destination_point = destination_p;
    taken_seats = 0;
    price = tic_price;
    dep_date = dd;
    arv_date = ad;
}

trip::trip() {}
//#########################################
//getters


unsigned int trip::getTripNumber() {
    return trip_number;
}

unsigned int trip::getTrainNumber() {
    return train_number;
}

string trip::getBoardingPoint() {
    return boarding_point;
}


string trip::getDestinationPoint() {
    return destination_point;
}

int trip::getTakenSeats() {
    return taken_seats;
}

float trip::getPrice() {
    return price;
}

date trip::getDepDate() {
    return dep_date;
}

date trip::getArvDate() {
    return arv_date;
}

char trip::getStatues() {
    return statues;
}
//################################################
//setters

void trip::setTripNumber(unsigned int trip) {
    trip_number = trip;
}

void trip::setTrainNumber(unsigned int Train) {
    trip_number = Train;
}

void trip::setBoardingPoint(string boardingPoint) {
    boarding_point = boardingPoint;
}

void trip::setDestinationPoint(string destinationPoint) {
    destination_point = destinationPoint;
}

void trip::setTakenSeats(int takenSeats) {
    taken_seats = takenSeats;
}


void trip::setPrice(float price) {
    trip::price = price;
}

void trip::setDepDate(date dd) {
    dep_date = dd;
}

void trip::setArvDate(date ad) {
    arv_date = ad;
}

void trip::setStatues(char stat) {
    statues = stat;
}

//endregion