// pe08-04.cpp
#include <iostream>
using namespace std;
#include <cstring>	// strlen(), strcpy()�� ����ϱ� ����
struct stringy 
{
	char * str;	// ���ڿ��� �����Ѵ�
	int ct;		// ���ڿ��� ����('\0'�� ����)
};

inline void show(stringy & bean, int n = 1) { for (int i = 0; i < n; i++) cout << bean.str << endl; }
inline void show(const char string[], int n = 1) { for (int i = 0; i < n; i++) cout << string << endl; }
void set(stringy & bean, const char string[]);

int main()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);	// ù ��° �������ڴ� �����̴�,
				// testing�� �纻�� ������ ������ �Ҵ��Ѵ�,
				// beany�� str ����� �� ����� �����ϵ��� �����Ѵ�,
				// testing�� �� ��Ͽ� �����Ѵ�,
				// beany�� ct ����� �����Ѵ�
	show(beany); 		// ���ڿ� ����� �� �� ����Ѵ�
	show(beany, 2);		// ���ڿ� ����� �� �� ����Ѵ�
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);		// testing ���ڿ��� �� �� ����Ѵ�
	show(testing, 3);	// testing ���ڿ��� �� �� ����Ѵ�
	show("Done!");
	return 0;
}

void set(stringy & bean, const char string[])
{
	char * ps = new char[strlen(string) + 1];
	bean.str = ps;
	strcpy(ps, string);
	bean.ct = strlen(bean.str);
}
