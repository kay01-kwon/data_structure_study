#ifndef PROGRESSION_HPP_
#define PROGRESSION_HPP_
#include <iostream>

using std::cout;
using std::endl;

template <typename T>
class Progression{

    public:

        Progression(T f = 0);

        virtual ~Progression();

        void printProgression(int n);

    protected:

        T first;
        T curr;

        virtual T firstValue();

        virtual T nextValue();
};


#endif

template <typename T>
inline Progression<T>::Progression(T f)
:first(f), curr(f)
{
    cout<<"Progression class"<<endl;
    cout<<curr<<endl;
}

template <typename T>
inline Progression<T>::~Progression()
{
}

template <typename T>
inline void Progression<T>::printProgression(int n)
{
    cout << firstValue();
    for(int i = 2; i <= n; i++)
        cout << " " << nextValue();
    cout<<endl;
}

template <typename T>
inline T Progression<T>::firstValue()
{
    curr = first;
    return curr;
}

template <typename T>
inline T Progression<T>::nextValue()
{
    return ++curr;
}
