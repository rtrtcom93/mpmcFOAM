// vect1.h -- Vector class with <<, mode state
// modified implementation
#ifndef MODVECTOR_H_
#define MODVECTOR_H_
#include <iostream>
namespace VECTOR
{
    using std::ostream;
    class Vector
    {
    private:
        double x;          // horizontal value
        double y;          // vertical value
        char mode;         // 'r' = rectangular, 'p' = polar
    // private methods for setting values
        void set_mag();
        void set_ang();
        void set_x(double, double);
        void set_y(double, double);
    public:
        Vector();
        Vector(double n1, double n2, char form = 'r');
        void set(double n1, double n2, char form = 'r');
        ~Vector();
        double xval() const {return x;}       // report x value
        double yval() const {return y;}       // report y value
        double magval() const;              // report magnitude
        double angval() const;              // report angle
        void polar_mode();                    // set mode to 'p'
        void rect_mode();                     // set mode to 'r'
    // operator overloading
        Vector operator+(const Vector & b) const;
        Vector operator-(const Vector & b) const;
        Vector operator-() const;
        Vector operator*(double n) const;
    // friends
        friend Vector operator*(double n, const Vector & a);
        friend ostream & operator<<(ostream & os, const Vector & v);
    };

}   // end namespace VECTOR
#endif
