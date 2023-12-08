// emp.cpp
#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
#include "emp.h"

employee::employee()
{
	fname[0] = '\0';
	lname[0] = '\0';
	job[0] = '\0';
}

employee::employee(char * fn, char * ln, char * j)
{
	for(int i = 0; i < SLEN; i++) {
		fname[i] = *(fn+i);
		lname[i] = *(ln+i);
		job[i] = *(j+i);
	}
}

employee::employee(const employee & e)
{
	for(int i = 0; i < SLEN; i++) {
		fname[i] = e.fname[i];
		lname[i] = e.lname[i];
		job[i] = e.job[i];
	}
}

void employee::ShowAll() const
{
	cout << "�۽�Ʈ �̸�: " << fname << "\n";
	cout << "���Ʈ �̸�: " << lname << "\n";
	cout << "����� ����: " << job << "\n";
}

void employee::SetAll()
{
	cout << "�۽�Ʈ �̸��� �Է��Ͻʽÿ�: ";
	cin >> fname;
	cout << "��Ʈ �̸��� �Է��Ͻʽÿ�: ";
	cin >> lname;
	cout << "����� ������ �Է��Ͻʽÿ�: ";
	cin >> job;
}

void employee::WriteAll(ofstream & fout, int classtype)
{
	fout << classtype;
	fout << '\n';
	fout << fname << '\n';
	fout << lname << '\n';
	fout << job << '\n';
}

void employee::GetAll(ifstream & fin)
{ 
	char ch;

	cout << "\nfname: ";

	fin.get(ch);
	while(fin.get(ch)) {
		if(ch == '\n') {
			break;
		}
		else {
			cout << ch;
		}
	}

	cout << "\nlname: ";
	while(fin.get(ch)) {
		if(ch == '\n') {
			break;
		}
		else {
			cout << ch;
		}
	}

	cout << "\njob: ";
	while(fin.get(ch)) {
		if(ch == '\n') {
			break;
		}
		else {
			cout << ch;
		}
	}
}

ostream & operator<<(ostream & os, const employee & e)
{
	os << e.fname << "\n";
	os << e.lname << "\n";
	os << e.job << "\n";

	return os;
}

manager::manager() : employee()
{
	inchargeof = 0;
}

manager::manager(char * fn, char * ln, char * j, int ico) : employee(fn, ln, j)
{
	inchargeof = ico;
}

manager::manager(const employee & e, int ico) : employee(e)
{
	inchargeof = ico;
}

manager::manager(const manager & m)
{
	for(int i = 0; i < SLEN; i++) {
		fname[i] = m.fname[i];
		lname[i] = m.lname[i];
		job[i] = m.job[i];
	}
	inchargeof = m.inchargeof;
}

void manager::ShowAll() const
{
	cout << "manager �����Դϴ�.\n";
	employee::ShowAll();
	cout << "inchargeof: " << inchargeof << '\n';
}

void manager::SetAll()
{
	cout << "manager ������ �Է��Ͻʽÿ�.\n";
	employee::SetAll();
	cout << "inchargeof: ";
	cin >> inchargeof;
}

void manager::WriteAll(ofstream & fout, int classtype)
{
	employee::WriteAll(fout, classtype);
	fout << inchargeof << '\n';
}

void manager::GetAll(ifstream & fin)
{
	char ch;

	employee::GetAll(fin);
	cout << "\ninchargeof: ";
	while(fin.get(ch)) {
		if(ch == '\n') {
			break;
		}
		else {
			cout << ch;
		}
	}
}

fink::fink()
{
	employee();
	reportsto[0] = '\0';
}

fink::fink(char * fn, char * ln, char * j, char * rpo) : employee(fn, ln, j)
{
	for(int i = 0; i < SLEN; i++)
		reportsto[i] = *(rpo+i);
}

fink::fink(const employee & e, char * rpo) : employee(e)
{
	for(int i = 0; i < SLEN; i++)
		reportsto[i] = *(rpo+i);
}

fink::fink(const fink & e) : employee(e)
{
	for(int i = 0; i < SLEN; i++)
		reportsto[i] = e.reportsto[i];
}

void fink::ShowAll() const
{
	cout << "fink �����Դϴ�.\n";
	employee::ShowAll();
	cout << "reportsto: " << reportsto << '\n';
}

void fink::SetAll()
{
	cout << "fink ������ �Է��Ͻʽÿ�.\n";
	employee::SetAll();
	cout << "reportsto: ";
	cin >> reportsto;
}

void fink::WriteAll(ofstream & fout, int classtype)
{
	employee::WriteAll(fout, classtype);
	fout << reportsto << '\n';
}

void fink::GetAll(ifstream & fin)
{
	char ch;

	employee::GetAll(fin);
	cout << "\nreportsto: ";
	while(fin.get(ch)) {
		if(ch == '\n') {
			break;
		}
		else {
			cout << ch;
		}
	}
}

highfink::highfink() : manager()
{
	fink();
}

highfink::highfink(char * fn, char * ln, char * j, char * rpo, int ico) : fink(fn, ln, j, rpo)
{
	inchargeof = ico;
}

highfink::highfink(const employee & e, char * rpo, int ico) : fink(e, rpo)
{
	inchargeof = ico;
}

highfink::highfink(const fink & f, int ico) : fink(f)
{
	inchargeof = ico;
}

highfink::highfink(const manager & m, char * rpo) : manager(m)
{
	for(int i = 0; i < SLEN; i++)
		reportsto[i] = rpo[i];
}

highfink::highfink(const highfink & h) : fink(h)
{
	inchargeof = h.inchargeof;
}

void highfink::ShowAll() const
{
	cout << "highfink �����Դϴ�.\n";
	employee::ShowAll();
	cout << "inchargeof: " << inchargeof << '\n';
	cout << "reportsto: " << reportsto << '\n';;
}

void highfink::SetAll()
{
	cout << "fink ������ �Է��Ͻʽÿ�.\n";
	manager::SetAll();
	cout << "reportsto: ";
	cin >> reportsto;
}

void highfink::WriteAll(ofstream & fout, int classtype)
{
	manager::WriteAll(fout, classtype);
	fout << reportsto << '\n';
}

void highfink::GetAll(ifstream & fin)
{
	char ch;

	manager::GetAll(fin);
	cout << "\nreportsto: ";
	while(fin.get(ch)) {
		if(ch == '\n') {
			break;
		}
		else {
			cout << ch;
		}
	}
}
