#ifndef PASSENGER_HPP_
#define PASSENGER_HPP_
#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

enum MealType {NO_PREF, REGULAR, LOW_FAT, VEGETARIAN};

class Passenger{

    public:

        // Default constructor
        Passenger();

        // Constructor given values
        Passenger(const string& name, MealType mealPref, const string& ffn = "None");

        // Copy constructor
        Passenger(const Passenger& pass);

        bool isFreqFlyer() const;

        void makeFreqFlyer(const string& newFreqFlyer);

        bool operator==(const Passenger& x) const;

        void print();

    private:

        string name_;               // Passenger name
        MealType mealPref_;
        bool isFreqFlyer_;
        string freqFlyerNo_;
};



#endif