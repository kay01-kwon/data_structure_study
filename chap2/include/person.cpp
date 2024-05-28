#include "person.hpp"

Person::Person()
{
    name_ = "Taylor swift";
    idNum_ = "123-456";
}

Person::Person(const string &name, const string idNum)
:name_(name), idNum_(idNum)
{

}

void Person::print()
{
    cout << "Name: " << name_ << endl;
    cout << "IDnum: " << idNum_ <<endl;
}

string Person::getName()
{
    return name_;
}

string Person::getId()
{
    return idNum_;
}
