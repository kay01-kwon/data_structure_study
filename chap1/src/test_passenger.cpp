#include "passenger.hpp"

int main(int argc, char** argv)
{
    // From 1 to 3: Use Stack

    // 4: Use Heap

    Passenger p[4];

    // 1. Default constructor
    p[0] = Passenger();
    // Construct given values
    // 2.1 No default used
    p[1] = Passenger("John Bob", VEGETARIAN, "293145");

    // 2.2 freq flyer number - default
    p[2] = Passenger("Smith Andrew", REGULAR);

    // 3. Copy constructor
    p[3] = Passenger(p[2]);

    // 4. Dynamic allocation (Heap)
    Passenger* p_ptr;
    p_ptr = new Passenger("Taylor Swift", REGULAR, "321456");


    for(int i = 0; i < 4; i++)
    {
        cout<<i+1<<". "<<endl;
        cout<<"Passenger ["<<i<<"] "<<endl;
        p[i].print();
        cout<<"\n";
    }
    
    cout<<"Dynamic memory allocation "<<endl;
    p_ptr->print();

    return EXIT_SUCCESS;
}