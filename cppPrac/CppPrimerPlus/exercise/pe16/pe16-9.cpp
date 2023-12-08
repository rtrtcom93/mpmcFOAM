// pe16-9.cpp
#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include <list>
#include <ctime>
#include <algorithm>
using namespace std;
int main()
{
	unsigned int times=100000;
	vector<int> vi0(times);
	srand(time(0));
	for(vector<int>::iterator i=vi0.begin();
			i!=vi0.end();++i) {
		*i = rand();
	}
	vector<int> vi;
	vi.assign(vi0.begin(), vi0.end());
	list<int> li;
	li.assign(vi0.begin(), vi0.end());
	clock_t start, end;
	cout << "sort vi : ";
	start = clock();
	sort(vi.begin(), vi.end());
	end = clock();
	cout << (double)(end - start)/CLOCKS_PER_SEC;
	cout << ", sort li : ";
	start = clock();
	li.sort();
	end = clock();
	cout << (double)(end - start)/CLOCKS_PER_SEC;
	li.assign(vi0.begin(), vi0.end());
	cout << ", sort li via vi : ";
	start = clock();
	vi.assign(li.begin(), li.end());
	sort(vi.begin(), vi.end());
	li.assign(vi.begin(), vi.end());
	end = clock();
	cout << (double)(end - start)/CLOCKS_PER_SEC;
	cout << endl;
    return 0;
}
