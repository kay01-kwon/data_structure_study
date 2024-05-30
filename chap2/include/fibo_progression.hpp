#ifndef FIBO_PROGRESSION_HPP_
#define FIBO_PROGRESSION_HPP_

#ifndef PROGRESSION_HPP_
#include "progression.hpp"
#endif

template <typename T>
class FiboProgression: public Progression<T>
{
    public:
        FiboProgression(T f = 0, T s = 1);

    protected:

        virtual T firstValue();
        virtual T nextValue();

        T second;
        T prev;

};


#endif

template <typename T>
inline FiboProgression<T>::FiboProgression(T f, T s)
:Progression<T>(f), second(s), prev(second - this->first)
{
}

template <typename T>
inline T FiboProgression<T>::firstValue()
{
    this->curr = this -> first;
    prev = second - this->first;
    return this->curr;
}

template <typename T>
inline T FiboProgression<T>::nextValue()
{
    T temp = prev;
    prev = this->curr;
    this->curr += temp;
    return this->curr;
}
