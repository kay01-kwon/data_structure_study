#include "student.hpp"

Student::Student()
{
    name_ = "Mark";
    idNum_ = "234-567";
    major_ = "Music";
    gradYear_ = 2013;
}

Student::Student(const string &name, const string &idNum, 
const string &major, int gradYear)
:Person(name, idNum), major_(major), gradYear_(gradYear)
{

}

void Student::print()
{
    cout<< "Major: " << major_ << endl;
    cout << "Year: " << gradYear_ << endl;
}

void Student::changeMajor(const string &newMajor)
{
    major_ = newMajor;
}
