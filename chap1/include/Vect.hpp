#ifndef VECT_HPP_
#define VECT_HPP_
#include <iostream>

using std::cout;
using std::endl;

template <typename T>
class Vect{

    public:

    Vect();

    Vect(int n);

    void push_back(T num);

    T operator[](int index);

    ~Vect();

    private:

    T* data_;
    int size_;
    int index_;
};

template <typename T>
Vect<T>::Vect()
{
    index_ = 0;
    size_ = 10;
    data_ = new T[size_];
}

template <typename T>
Vect<T>::Vect(int n)
{
    index_ = 0;
    size_ = n;
    data_ = new T[n];
}

template <typename T>
void Vect<T>::push_back(T num)
{
    cout<<index_;
    cout<<": ";
    *(data_+index_) = num;
    cout<<*(data_+index_)<<endl;
    index_++;
}

template <typename T>
T Vect<T>::operator[](int index)
{
    return *(data_+index);
}

template <typename T>
Vect<T>::~Vect()
{
    delete[] data_;
}


#endif