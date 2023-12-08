//pe16-5.cpp
#include <iostream>
#include <algorithm>
#define MAX 10

using namespace std;

template<class DTYPE>
int reduce(DTYPE ar[], int n);

template<class DTYPE>
void show(const DTYPE ar[], int n);

int main()
{
    long myarray[MAX] = {12, 12 ,5, 6, 11, 5, 6, 77, 11,12};
 
    show(myarray, MAX);
    
    int newsize = reduce(myarray,MAX);
    show(myarray, newsize);

	return (0);
}

template<class DTYPE>
int reduce(DTYPE ar[], int n)
{

    sort(ar, ar + n);
    DTYPE * past_end;
    past_end = unique(ar, ar + n);
    return past_end - ar;
}

template<class DTYPE>
void show(const DTYPE ar[], int n)
{
    for (int i = 0; i < n; i++) 
        cout << ar[i] << ' ';
	
    cout << endl;
}
