#ifndef DSPROJECT_TICKET_H
#define DSPROJECT_TICKET_H

#include <string>

using namespace std;

struct date
{
    int day;
    int month;
    int year;
    int hours;
    int min;
    char pm_am;
};

class train {
private:
    string train_name;
    unsigned int train_number;
    int no_of_seats;
public:
    //region train methods
    //constructor
    train(string trainName, unsigned int trainNumber, int noOfSeats);

    train();
    //######################
    //getters
    string getTrainName();

    unsigned int getTrainNumber();

    int getNoOfSeats();
    //#########################
    //setters
    void setTrainName(string trainName);

    void setTrainNumber(unsigned int trainNumber);

    void setNoOfSeats(int noOfSeats);
    //#################################
    //endregion
};

class trip {
private:
    unsigned int trip_number;
    unsigned int train_number;
    string boarding_point;
    string destination_point;
    int taken_seats;
    float price;
    date dep_date;
    date arv_date;
    char statues;
    //TODO change statues everytime someone login
public:
    //region trip methods
    //constructor

    trip(unsigned int trip_no, unsigned int train, string boarding_p, string destination_p, float tic_price, date dd, date ad);
    trip();
    //###############
    //getters

    unsigned int getTripNumber();

    unsigned int getTrainNumber();

    string getBoardingPoint();

    string getDestinationPoint();

    int getTakenSeats();

    float getPrice();

    date getDepDate();

    date getArvDate();

    char getStatues();

    //####################
    //setters
    void setTripNumber(unsigned int trip);

    void setTrainNumber(unsigned int Train);

    void setBoardingPoint(string boardingPoint);

    void setDestinationPoint(string destinationPoint);

    void setTakenSeats(int takenSeats);

    void setPrice(float price);

    void setArvDate(date ad);

    void setDepDate(date dd);

    void setStatues(char stat);
    //#########################
   //endregion
};
#endif //DSPROJECT_TICKET_H
