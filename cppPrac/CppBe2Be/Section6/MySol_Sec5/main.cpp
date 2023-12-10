
// Section 6
// Challenge

/* 
    Frank's Carpet Cleaning Service
    Charges:
        $25 per small room
        $35 per large room
    Sales tax rate is 6%
    Estimates are valid for 30 days

    Prompt the user for the number of small and large rooms they would like cleaned
    and provide an estimate such as:
     
Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost : $110
Tax: $6.6
===============================
Total estimate: $116.6
This estimate is valid for 30 days
*/

/*
Pseudocode
1. Ask how many small rooms to be cleand
2. Ask how many large rooms to be cleand
3. Print out the price per small room
4. Print out the price per large room
5. Show the cost
6. Shot the tax
*/

#include <iostream>

using namespace std;

int main() {

    unsigned short number_of_small_rooms {0};
    unsigned short number_of_large_rooms {0};
    const float price_for_small_room  {25};
    const float price_for_large_room  {35};
    float cost {0};
    float tax_rate{0.06};
    float tax  {0};


    cout << "how many small rooms would you like cleand? ";
    cin  >> number_of_small_rooms;

    cout << "how many large rooms would you like cleand? ";
    cin  >> number_of_large_rooms;
    
    cout << endl;

    cout << "Estiamate for carpet cleaning service" << endl;
    cout << "Number of small rooms: " << number_of_small_rooms << endl;
    cout << "Number of large rooms: " << number_of_large_rooms << endl;
    cout << "Price per small room: $" << price_for_small_room  << endl;
    cout << "Price per large room: $" << price_for_large_room  << endl;
    
    cost = float(number_of_large_rooms)*price_for_large_room
          +float(number_of_small_rooms)*price_for_small_room;    
    
    cout << "Cost :                $" << cost << endl;
    
    tax = cost*tax_rate; 

    cout << "Tax  :                $" << tax << endl;
    cout << "==============================="<< endl;
    
    cout << "Total extimate :      $" << cost+tax << endl;
    cout << "This extimait is valid for 30 days" << endl;

    return 0;
}

