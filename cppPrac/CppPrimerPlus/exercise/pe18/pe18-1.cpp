#include <iostream>
#include <initializer_list>
template<class T>
T average_list(std::initializer_list<T> il)
{
	T sum=0;
	for(auto it=il.begin();it!=il.end();++it)
		sum+=*it;
	return sum/il.size();
}
int main()
{
	using namespace std;
	auto q = average_list({15.4, 10.7, 9.0});
	cout << q << endl;
	cout << average_list({20, 30, 19, 17, 45, 38}) << endl;
	auto ad = average_list<double>({'A', 70, 65.33});
	cout << ad << endl;
	return 0;
}
