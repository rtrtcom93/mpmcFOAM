// pe15-04.cpp  -- Listing15.16�� RTTI�� ��ȯ�Ͽ���.
#include <iostream>
//#include "sales.h"

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;

	double vals1[12] =
	{
		1220, 1100, 1122, 2212, 1232, 2334,
		2884, 2393, 3302, 2922, 3002, 3544
	};

	double vals2[12] =
	{
		12, 11, 22, 21, 32, 34,
		28, 29, 33, 29, 32, 35
	};

	Sales sales1(2004, vals1, 12);
	LabeledSales sales2("Blogstar",2005, vals2, 12 );
	LabeledSales::nbad_index *ls;

	cout << "ù ��° try ���:\n";
	try
	{
		int i;
		cout << "Year = " << sales1.Year() << endl;
		for (i = 0; i < 12; ++i)
		{
			cout << sales1[i] << ' ';
			if (i % 6 == 5)
				cout << endl;
		}
		cout << "Year = " << sales2.Year() << endl;
		cout << "Label = " << sales2.Label() << endl;
		for (i = 0; i <= 12; ++i)
		{
			cout << sales2[i] << ' ';
			if (i % 6 == 5)
				cout << endl;
		}
		cout << "try ��� 1�� ��.\n";
	}
	catch(Sales::bad_index & bad)
	{
		cout << bad.what();
		if(ls = dynamic_cast<LabeledSales::nbad_index *>(&bad)) 
			if(typeid(LabeledSales::nbad_index) == typeid(bad))
				cout << "Company: " << ls->label_val() << endl;
		
		cout << "�߸��� �ε���: " << bad.bi_val() << endl;
	}
	cout << "\n���� try ���:\n";
	try
	{
		sales2[2] = 37.5;
		sales1[20] = 23345;
		cout << "try ��� 2�� ��.\n";
	}
	catch(Sales::bad_index & bad)
	{
		cout << bad.what();
		if(ls = dynamic_cast<LabeledSales::nbad_index *>(&bad))
			if(typeid(LabeledSales::nbad_index) == typeid(bad))
				cout << "Company: " << ls->label_val() << endl;
		
		cout << "�߸��� �ε���: " << bad.bi_val() << endl;
	}

	cout << "���α׷��� �����մϴ�.\n";
	return 0;
}
