//pe15-2.cpp
#include <iostream>
#include <cmath> // or math.h, unix users may need -lm flag
#include "pe15-2.h"
// function prototypes
double hmean(double a, double b) throw(hmeanexcp);
double gmean(double a, double b) throw(gmeanexcp);
int main()
{
    using std::cout;
    using std::cin;
    using std::endl;

    double x, y, z;

    cout << "Enter two numbers: ";
    while (cin >> x >> y)
    {
        try {                  // start of try block
            z = hmean(x,y);
            cout << "Harmonic mean of " << x << " and " << y
                << " is " << z << endl;
            cout << "Geometric mean of " << x << " and " << y
                << " is " << gmean(x,y) << endl;
            cout << "Enter next set of numbers <q to quit>: ";
        }// end of try block
        catch (hmeanexcp & bg)    // start of catch block
        {
            cout << bg.what();
            cout << "Try again.\n";
            continue;
        }
        catch (gmeanexcp & bh)
        {
               cout << bh.what();
            cout << "Sorry, you don't get to play any more.\n";
            break;
        } // end of catch block
    }
    cout << "Bye!\n";
    return 0;
}

double hmean(double a, double b) throw(hmeanexcp)
{
    if (a == -b)
        throw hmeanexcp();
    return 2.0 * a * b / (a + b);
}

double gmean(double a, double b) throw(gmeanexcp)
{
    if (a < 0 || b < 0)
        throw gmeanexcp();
    return std::sqrt(a * b);
}
