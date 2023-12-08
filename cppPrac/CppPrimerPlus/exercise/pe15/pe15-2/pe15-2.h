// pe15-2.h  -- exception classes for hmean(), gmean()
#ifndef PE15_2_H_
#define PE15_2_H_

#include <iostream>
#include <stdexcept>

class hmeanexcp : public std::logic_error
{
public:
    hmeanexcp()
     : std::logic_error("hmean() invalid arguments: a = -b\n")
     {

     }
};

class gmeanexcp : public std::logic_error
{
public:
    gmeanexcp()
     : std::logic_error("gmean()  arguments should be >= 0\n")
     {

     }
};
#endif
