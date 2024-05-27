#include "passenger.hpp"

Passenger::Passenger()
{
    name_ = "--No Name--";
    mealPref_ = NO_PREF;
    isFreqFlyer_ = false;
    freqFlyerNo_ = "None";
}

Passenger::Passenger(const string &name, 
MealType mealPref, const string &ffn):
name_(name), mealPref_(mealPref),
isFreqFlyer_(ffn !="None")
{
    freqFlyerNo_ = ffn;
}

Passenger::Passenger(const Passenger &pass)
{
    name_ = pass.name_;
    mealPref_ = pass.mealPref_;
    isFreqFlyer_ = pass.isFreqFlyer_;
    freqFlyerNo_ = pass.freqFlyerNo_;
}

bool Passenger::isFreqFlyer() const
{
    return isFreqFlyer_;
}

void Passenger::makeFreqFlyer(const string &newFreqFlyer)
{
    isFreqFlyer_ = true;
    freqFlyerNo_ = newFreqFlyer;
}

bool Passenger::operator==(const Passenger &x) const
{
    return  name_ == x.name_
            && mealPref_ == x.mealPref_
            && isFreqFlyer_ == x.isFreqFlyer_
            && freqFlyerNo_ == x.freqFlyerNo_;
}

void Passenger::print()
{
    cout<<"Name: "<<name_<<endl;
    cout<<"Meal pref: "<<mealPref_<<endl;
    if(isFreqFlyer_)
        cout<<"Freq flyer No: "<<freqFlyerNo_<<endl;
}
