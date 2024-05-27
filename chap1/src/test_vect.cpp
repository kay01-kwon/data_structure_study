#include "Vect.hpp"

int main(int argc, char** argv)
{
    int size;
    size = 5;
    Vect<double> a;
    a = Vect<double>(size);

    a.push_back(0);
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);

    for(int i = 0 ; i < size; i++)
    {
        cout<<a[i]<<" ";
    }

    cout<<"\n";

    return 0;
}