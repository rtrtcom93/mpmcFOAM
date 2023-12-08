#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <memory>
struct Review {
	std::string title;
	int rating;
	unsigned int price;
};
bool operator<(const std::shared_ptr<Review> r1, const std::shared_ptr<Review> r2);
bool worseThan(const std::shared_ptr<Review> r1, const std::shared_ptr<Review> r2);
bool expensiveThan(const std::shared_ptr<Review> r1, const std::shared_ptr<Review> r2);
bool FillReview(Review & rr);
void ShowReview(const std::shared_ptr<Review> rr);
int main()
{
	using namespace std;
	vector< shared_ptr<Review> > books;
	shared_ptr<Review> temp(new Review);
	while (FillReview(*temp)) {
		books.push_back(temp);
		temp.reset(new Review);
	}
	cout << "Thank you. You entered the following "
		<< books.size() << " ratings:\n"
		<< "Rating\tPrice\tBook\n";
	for_each(books.begin(), books.end(), ShowReview);
	sort(books.begin(), books.end());
	cout << "Sorted by title:\nRating\tPrice\tBook\n";
	for_each(books.begin(), books.end(), ShowReview);
	sort(books.begin(), books.end(), worseThan);
	cout << "Sorted by increasing rating:\nRating\tPrice\tBook\n";
	for_each(books.begin(), books.end(), ShowReview);
	cout << "Sorted by decreasing rating:\nRating\tPrice\tBook\n";
	for_each(books.rbegin(), books.rend(), ShowReview);
	sort(books.begin(), books.end(), expensiveThan);
	cout << "Sorted by increasing price:\nRating\tPrice\tBook\n";
	for_each(books.begin(), books.end(), ShowReview);
	cout << "Sorted by decreasing price:\nRating\tPrice\tBook\n";
	for_each(books.rbegin(), books.rend(), ShowReview);
	cout << "Bye.\n";
	return 0;
}
bool operator<(const std::shared_ptr<Review> r1, const std::shared_ptr<Review> r2)
{
	if (r1->title < r2->title)
		return true;
	else if (r1->title == r2->title && r1->rating < r2->rating)
		return true;
	else
		return false;
}
bool worseThan(const std::shared_ptr<Review> r1, const std::shared_ptr<Review> r2)
{
	if (r1->rating < r2->rating)
		return true;
	else
		return false;
}
bool expensiveThan(const std::shared_ptr<Review> r1, const std::shared_ptr<Review> r2)
{
	if (r1->price < r2->price)
		return true;
	else
		return false;
}
bool FillReview(Review & rr)
{
	std::cout << "Enter book title (quit to quit): ";
	std::getline(std::cin,rr.title);
	if (rr.title == "quit")
		return false;
	std::cout << "Enter book rating: ";
	std::cin >> rr.rating;
	if (!std::cin)
		return false;
	std::cout << "Enter book price: ";
	std::cin >> rr.price;
	if (!std::cin)
		return false;
	while (std::cin.get() != '\n')
		continue;
	return true;
}
void ShowReview(const std::shared_ptr<Review> rr)
{
	std::cout << rr->rating << "\t" << rr->price << "\t" << rr->title << std::endl; 
}
