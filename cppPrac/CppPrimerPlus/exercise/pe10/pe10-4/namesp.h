// namesp.h
namespace SALES
{
	const int QUARTERS = 4;
	class Sales
	{
	private:
		double sales[QUARTERS];
		double average;
		double max;
		double min;
	public:
		Sales();
		Sales(Sales & s, const double ar[], int n);
		void showSales();
	};
}
