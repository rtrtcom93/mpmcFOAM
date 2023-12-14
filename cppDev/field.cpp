#include "field.hpp"
#include <vector>

void initVariables()
{
    std::vector<double> 
                phi,
                exact,
                U,
                source,
                l,
                d,
                u
                (internalFieldSize);
}

void destroyVariables()
{

}

void correctBC()
{
    phiLeft  = 0;
    phiRight = L;
}