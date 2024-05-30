#include "progression.hpp"
#include "arith_progression.hpp"
#include "geom_progression.hpp"
#include "fibo_progression.hpp"

#include <boost/make_shared.hpp>

int main(int argc, char** argv)
{
    cout << "\n";
    cout << "**********************************************"<<endl;
    cout << "Arithmetic progression with default increment: \n";
    boost::shared_ptr< Progression<double> > Prog_ptr;
    Prog_ptr = boost::make_shared< ArithProgression<double> >();

    // Static cast to derived class
    // to utilize the member function of the derived class
    // auto boost_cast_ptr = 
    // boost::static_pointer_cast< ArithProgression<double> >(Prog_ptr);
    // boost_cast_ptr->printProgression(10);

    Prog_ptr->printProgression(10);
    // You cannot access to the member function of
    // arithmetic class

    cout << "Arithmetic progression with 2.3: \n";
    Prog_ptr = 
    boost::shared_ptr< ArithProgression<double> >
    (new ArithProgression<double>(2.3));
    Prog_ptr->printProgression(10);


    cout << "\n";
    cout << "**********************************************"<<endl;
    cout << "Geometric progression with default base: \n";

    Prog_ptr = 
    boost::shared_ptr< GeomProgression<double> >
    (new GeomProgression<double>());
    Prog_ptr->printProgression(10);

    cout << "Geometric progression with base 2.5: \n";

    Prog_ptr = 
    boost::shared_ptr< GeomProgression<double> >
    (new GeomProgression<double>(2.5));
    Prog_ptr->printProgression(10);

    cout << "\n";
    cout << "**********************************************"<<endl;
    cout << "Fibonacci progression with default start values: \n";
    Prog_ptr = 
    boost::shared_ptr< FiboProgression<double> >
    (new FiboProgression<double>());
    Prog_ptr->printProgression(10);

    cout << "Fibonacci progression with start values 4 and 6: \n";
    Prog_ptr = 
    boost::shared_ptr< FiboProgression<double> >
    (new FiboProgression<double>(4, 6));
    Prog_ptr->printProgression(10);

    cout<<"\n";


    return EXIT_SUCCESS;
}