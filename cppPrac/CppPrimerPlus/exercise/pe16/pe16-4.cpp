// pe16-4.cpp -- one possibility

#include <iostream>
#include <algorithm>
#define MAX 10

int reduce(long ar[], int n);
void show(const long ar[], int n);

int main()
{
    long myarray[MAX] = {12, 12 ,5, 6, 11, 5, 6, 77, 11,12};

    show(myarray, MAX);

    int newsize = reduce(myarray,MAX);
    show(myarray, newsize);
    return (0);
}

int reduce(long ar[], int n)
{
    // or one could copy to a list and use list methods
    // or copy to a set; in either case, copy results
    // back to array
    std::sort(ar, ar + n);
    long * past_end;
    past_end = std::unique(ar, ar + n);
    return past_end - ar;
}

void show(const long ar[], int n)
{
    for (int i = 0; i < n; i++)
        std::cout << ar[i] << ' ';
    std::cout << std::endl;
}
