#include <iostream>
#include <list>
#include <iterator>
#include <algorithm>
int main()
{
	using std::list;
	using std::cout;
	using std::endl;
	int vals[10] = {50, 100, 90, 180, 60, 210, 415, 88, 188, 210};
	list<int> yadayada(vals, vals + 10);
	list<int> etcetera(vals, vals + 10);
	cout << "Original list:\n";
	auto outint = [](int n) { cout << n << " ";};
	for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl;
	yadayada.remove_if([](int v){return v>100;});
	etcetera.remove_if([](int v){return v>200;});
	cout << "Trimmed lists:\n";
	for_each(yadayada.begin(), yadayada.end(), outint);
	cout << endl;
	for_each(etcetera.begin(), etcetera.end(), outint);
	cout << endl;
	return 0;
}
