#ifndef GEOM_PROGRESSION_HPP_
#define GEOM_PROGRESSION_HPP_

#ifndef PROGRESSION_HPP_
#include "progression.hpp"
#endif

template <typename T>
class GeomProgression: public Progression<T>
{
    public:
        GeomProgression(T b = 2);

    protected:

        virtual T nextValue();

        T base;

};


#endif

template <typename T>
inline GeomProgression<T>::GeomProgression(T b)
:Progression<T>(1), base(b)
{
}

template <typename T>
inline T GeomProgression<T>::nextValue()
{
    T temp;
    temp = this->curr * base;
    this->curr = temp;
    return temp;
}
