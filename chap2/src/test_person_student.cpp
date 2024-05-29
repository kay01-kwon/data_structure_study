#include "person.hpp"
#include "student.hpp"
#include <boost/make_shared.hpp>

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

    // Boost shaared pointer (smart pointer)
    boost::shared_ptr<Person> p_boost_ptr;
    p_boost_ptr = boost::make_shared<Student>();
    auto boost_cast_ptr = boost::static_pointer_cast< Student >(p_boost_ptr);
    cout<< "Using boost shared pointer"<<endl;
    cout<< "inherit student from person"<<endl;
    cout<< "Before changing major"<<endl;
    boost_cast_ptr->print();
    cout<< "After changing major"<<endl;
    boost_cast_ptr->changeMajor("Mechanical Engineering");
    boost_cast_ptr->print();

    cout << "*****************************" << endl;

    return EXIT_SUCCESS;
}