#include "person.hpp"
#include "student.hpp"

int main()
{
    Person person("Mary","123-456");
    Student student("Bob","234-567","Math",2013);

    cout << "Example 1" << endl;
    cout << "*****************************" << endl;
    cout << student.getName() << endl;
    person.print();
    cout << "*****************************" << endl;
    student.print();
    cout << "*****************************" << endl;
    student.changeMajor("Physics");
    student.print();
    cout << "*****************************" << endl;


    Person* person_ptr[2];
    person_ptr[0] = new Person();
    person_ptr[1] = new Student();

    cout << "Example 2 (Dynamic binding)" << endl;
    cout << "*****************************" << endl;
    person_ptr[0]->print();
    cout << "*****************************" << endl;
    cout << "Name: " << person_ptr[1]->getName()<<endl;
    person_ptr[1]->print();
    cout << "*****************************" << endl;

    return EXIT_SUCCESS;
}