#ifndef PERSON_HPP_
#define PERSON_HPP_
#include <iostream>
#include <string>

using std::cout;
using std::endl;
using std::string;

class Person{

    public:
        
        Person();

        Person(const string& name, const string idNum);

        // Accessor functions

        virtual void print();
        
        string getName();

        string getId();

        ~Person(){
            cout << "Destructor (Person)" <<endl;
        };

    protected:

        string      name_;
        string      idNum_;

};


#endif