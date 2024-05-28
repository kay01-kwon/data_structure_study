#ifndef STUDENT_HPP_
#define STUDENT_HPP_
#include "person.hpp"

class Student: public Person{

    public:

        Student();

        Student(const string& name, const string& idNum, 
        const string& major, int gradYear);

        virtual void print();

        void changeMajor(const string& newMajor);

        ~Student(){};

    protected:

        string major_;

        int gradYear_;

};

#endif