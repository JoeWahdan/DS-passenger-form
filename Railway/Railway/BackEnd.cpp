#include "BackEnd.h"

BackEnd::BackEnd() {
    load_data();
}

void BackEnd::save_data() {
    ofstream file;
    file.open("hamada.txt");
    //region admin save
    file << admin_list.size() << endl;
    for (auto temp_admin : admin_list)
    {
        file << temp_admin.first << ' ' << temp_admin.second.first << ' ' << temp_admin.second.second << endl;
    }
    //endregion
    //region passenger save
    file << passenger_list.size() << endl;
    for (auto temp_pass : passenger_list)
    {
        file << temp_pass.first << ' ' << temp_pass.second.getPassword() << endl;
        file << temp_pass.second.getFirstName() << ' ' << temp_pass.second.getLastName() << ' ' <<
            temp_pass.second.getGender() << endl;
        file << temp_pass.second.return_all_list().size() << endl;
        for (unsigned int temp_int : temp_pass.second.return_all_list())
        {
            file << temp_int << endl;
        }
    }
    //endregion
    //region train save
    file << train_list.size() << endl;
    for (auto temp_train : train_list)
    {
        file << temp_train.first << ' ' << temp_train.second.getTrainName() <<
            ' ' << temp_train.second.getNoOfSeats() << endl;
    }
    //endregion
    //region trips save
    file << trip_list.size() << endl;
    for (auto temp_trip : trip_list)
    {
        file << temp_trip.first << ' ' << temp_trip.second.getTrainNumber() << endl;
        file << temp_trip.second.getBoardingPoint() << ' ' << temp_trip.second.getDestinationPoint() << endl;
        file << temp_trip.second.getTakenSeats() << ' ' << temp_trip.second.getPrice() << endl;
        file << temp_trip.second.getDepDate().day << ' ' << temp_trip.second.getDepDate().month
            << ' ' << temp_trip.second.getDepDate().year << ' ' << temp_trip.second.getDepDate().hours
            << ' ' << temp_trip.second.getDepDate().min << ' ' << temp_trip.second.getDepDate().pm_am << endl;
        file << temp_trip.second.getArvDate().day << ' ' << temp_trip.second.getArvDate().month
            << ' ' << temp_trip.second.getArvDate().year << ' ' << temp_trip.second.getArvDate().hours
            << ' ' << temp_trip.second.getArvDate().min << ' ' << temp_trip.second.getArvDate().pm_am << endl;
        file << temp_trip.second.getStatues() << endl;
    }
    //endregion
    //region stations save
    file << station_list.size() << endl;
    for (string temp : station_list)
    {
        file << temp << endl;
    }
    //endregion
    file.close();
}

void BackEnd::load_data() {
    ifstream file;
    file.open("hamada.txt");
    //region temp variables
    int temp_loop_size, temp_int;
    float temp_float;
    string temp_string;
    string temp_string1;
    unsigned int temp_un_int, temp_un_int1;
    char temp_char;
    pair<string, int> temp_admin_pair;
    passenger temp_passenger;
    train temp_train;
    date temp_date;
    trip temp_trip;
    //endregion
    //region load admin
    file >> temp_loop_size;
    for (int i = 0; i < temp_loop_size; ++i) {
        file >> temp_string >> temp_string1 >> temp_int;
        temp_admin_pair.first = temp_string1;
        temp_admin_pair.second = temp_int;
        admin_list[temp_string] = temp_admin_pair;
    }
    //endregion
    //region load passenger
    file >> temp_loop_size;
    for (int i = 0; i < temp_loop_size; ++i) {
        file >> temp_string >> temp_string1;
        temp_passenger.setPassword(temp_string1);
        file >> temp_string1;
        temp_passenger.setFirstName(temp_string1);
        file >> temp_string1 >> temp_char;
        temp_passenger.setLastName(temp_string1);
        temp_passenger.setGender(temp_char);
        passenger_list[temp_string] = temp_passenger;
        file >> temp_int;
        for (int j = 0; j < temp_int; ++j) {
            file >> temp_un_int;
            passenger_list[temp_string].reserve_a_ticket(temp_un_int);
        }
    }
    //endregion
    //region load trains
    file >> temp_loop_size;
    for (int i = 0; i < temp_loop_size; ++i) {
        file >> temp_un_int >> temp_string1 >> temp_int;
        temp_train.setTrainNumber(temp_un_int);
        temp_train.setNoOfSeats(temp_int);
        temp_train.setTrainName(temp_string1);
        train_list[temp_un_int] = temp_train;
    }
    //endregion
    //region load trip
    file >> temp_loop_size;
    for (int i = 0; i < temp_loop_size; ++i) {
        file >> temp_un_int >> temp_un_int1 >> temp_string1
            >> temp_string >> temp_int >> temp_float >> temp_date.day
            >> temp_date.month >> temp_date.year >> temp_date.hours
            >> temp_date.min >> temp_date.pm_am;
        temp_trip.setTrainNumber(temp_un_int1);
        temp_trip.setTripNumber(temp_un_int);
        temp_trip.setBoardingPoint(temp_string1);
        temp_trip.setDestinationPoint(temp_string);
        temp_trip.setTakenSeats(temp_int);
        temp_trip.setPrice(temp_float);
        temp_trip.setDepDate(temp_date);
        file >> temp_date.day >> temp_date.month >> temp_date.year
            >> temp_date.hours >> temp_date.min >> temp_date.pm_am;
        temp_trip.setArvDate(temp_date);
        trip_list[temp_un_int] = temp_trip;
    }
    //endregion
    //region load station
    file >> temp_loop_size;
    for (int i = 0; i < temp_loop_size; ++i) {
        file >> temp_string;
        station_list.push_back(temp_string);
    }
    //endregion
    file.close();
}

char BackEnd::login(string username, string password) {
    if (passenger_list.find(username) != passenger_list.end())
    {
        if (passenger_list.find(username)->second.getPassword() == password)
        {
            return 'p';
        }
        else {
            return 'w';
        }
    }
    else if (admin_list.find(username) != admin_list.end())
    {
        if (passenger_list.find(username)->second.getPassword() == password)
        {
            return 'a';
        }
        else
            return 'w';
    }
    else {
        return 'e';
    }
}

int BackEnd::registration(string mail, string password, string first_n, string last_n, char gender) {
    if ((passenger_list.find(mail) != passenger_list.end()) || (admin_list.find(mail) != admin_list.end()))
        return 1;
    passenger temp_pass(password, gender, first_n, last_n);
    passenger_list[mail] = temp_pass;
    return 0;
    save_data();
}

int BackEnd::add_admin(string username, string pass, int pre) {
    if ((passenger_list.find(username) != passenger_list.end()) || (admin_list.find(username) != admin_list.end()))
        return 1;
    pair<string, int> x;
    x.first = pass;
    x.second = pre;
    admin_list[username] = x;
    return 0;
}

int BackEnd::trail()
{
    return admin_list.size();
}

BackEnd::~BackEnd() {
}

