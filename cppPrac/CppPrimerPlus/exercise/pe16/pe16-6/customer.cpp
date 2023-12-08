// customer.cpp

#include "customer.h"
#include <cstdlib>
using namespace std;
void Customer::set(long when)
{
    processtime = rand() % 3 + 1;
    arrive = when;
}
