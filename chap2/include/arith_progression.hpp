#ifndef ARITH_PROGRESSION_HPP_
#define ARITH_PROGRESSION_HPP_

#ifndef PROGRESSION_HPP_
#include "progression.hpp"
#endif

template <typename T>
class ArithProgression: public Progression<T>{

    public:
        ArithProgression(T i = 1);

        void print();


    protected:

        virtual T nextValue();

        T inc;
};

#endif

template <typename T>
inline ArithProgression<T>::ArithProgression(T i)
:Progression<T>(),inc(i)
{
    // cout << "Arith Progression class" << endl;
    // cout << this->curr <<endl;
}

template <typename T>
inline void ArithProgression<T>::print()
{
    // cout << this->curr <<endl;
}

template <typename T>
inline T ArithProgression<T>::nextValue()
{
    T temp;
    temp = this->curr + inc;
    this->curr = temp;
    return temp;
}
