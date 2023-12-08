// pe16-7.cpp
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> Lotto(int size, int sel_size);

void ShowReview(const int &item);

int main()
{
	vector<int> winners;

	winners = Lotto(51, 6);
	for_each(winners.begin(), winners.end(), ShowReview);
	return(0);
}

vector<int> Lotto(int size, int sel_size)
{
	vector<int> winners;

	for(int i = 0; i < size; i++)
		winners.push_back(i+1);

	random_shuffle(winners.begin(), winners.end());

	winners.resize(sel_size);

	return winners;
}

void ShowReview(const int &item)
{
	cout << item << ' ';
}
