// pe16-1.cpp -- one of many possible solutions
#include <iostream>
#include <string>

bool isPal(const std::string & s);

int main()
{
    std::string input;

    std::cout << "Enter a string (empty string to quit):\n";
    std::getline(std::cin,input);
    while (std::cin && input.size() > 0)
    {
        if (isPal(input))
            std::cout << "That was a palindrome!\n";
        else
            std::cout << "That was not a palindrome!\n";
        std::cout << "Enter a string (empty string to quit):\n";
        std::getline(std::cin,input);
    }
    std::cout << "Bye!\n";

    return 0;
}

bool isPal(const std::string & s)
{
    std::string rev(s.rbegin(), s.rend()); // construct reversed string

    // some older compilers don?t implement the above constructor
    // another approach is this
    // std::string rev(s);    // rev same size as s
    // copy(s.rbegin(), s.rend(), rev.begin());

    return (rev == s);
}
