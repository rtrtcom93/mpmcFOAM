//customer.h

#ifndef _CUSTOMER_H_
#define _CUSTOMER_H_

class Customer
{
private:
    long arrive;
    int processtime;
public:
    //Customer() {arrive = processtime = 0; }
    void set(long when);
    long when() const {return arrive;}
    int ptime() const {return processtime;}
};


#endif
