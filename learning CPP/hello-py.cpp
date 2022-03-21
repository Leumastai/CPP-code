#include <iostream>
#include <Python.h>
#include <boost/python.hpp>

using namespace boost::python;


namespace someFunctions
{   
    // Avoid cluttering the global namespace. 
    // A couple of simple C++ functions that we want to expose to Python. 
    std::string greet() 
    { 
        return "hello, world"; 
        
    }
    
    int square(int number)
    {
        return number * number;
    
    }
}

BOOST_PYTHON_MODULE(getting_started1)
{
    //Add the simple functions to the module
    def("greet", someFunctions::greet);
    def("square", someFunctions::square);
}