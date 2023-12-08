#include <iostream>
#include <string>
#include <utility>
class Cpmv
{
	public:
		struct Info
		{
			std::string qcode;
			std::string zcode;
		};
	private:
		Info *pi;
	public:
		Cpmv();
		Cpmv(std::string q, std::string z);
		Cpmv(Cpmv && mv);
		~Cpmv();
		Cpmv & operator=(const Cpmv &cp);
		Cpmv & operator=(Cpmv && mv);
		Cpmv operator+(const Cpmv & obj) const;
		void Display() const;
};
Cpmv::Cpmv()
	: pi(nullptr)
{
}
Cpmv::Cpmv(std::string q, std::string z)
	: pi(new Info)
{
	pi->qcode=q;
	pi->zcode=z;
}
Cpmv::Cpmv(Cpmv && mv)
	: pi(mv.pi)
{
	mv.pi=nullptr;
}
Cpmv::~Cpmv()
{
	if(pi) delete pi;
	pi=nullptr;
}
Cpmv & Cpmv::operator=(const Cpmv &cp)
{
	if(pi) delete pi;
	pi = cp.pi;
	return *this;
}
Cpmv & Cpmv::operator=(Cpmv &&mv)
{
	pi = mv.pi;
	mv.pi=nullptr;
	return *this;
}
Cpmv Cpmv::operator+(const Cpmv & obj) const
{
	std::string qcode;
	std::string zcode;
	if(pi) {
		qcode+=pi->qcode;
		zcode+=pi->zcode;
	}
	if(obj.pi) {
		qcode+=obj.pi->qcode;
		zcode+=obj.pi->zcode;
	}
	Cpmv temp(qcode, zcode);
	return temp;
}
void Cpmv::Display() const
{
	std::cout << "qcode : " << (pi?pi->qcode:"") << "\t"
		<< ", zcode : " << (pi?pi->zcode:"")
		<< std::endl;
}
int main()
{
	Cpmv one("q1", "z1");
	std::cout << "one -> ";one.Display();
	Cpmv two("q2", "z2");
	std::cout << "two -> ";two.Display();
	std::cout << "--------------------------------------" << std::endl;
	Cpmv three(Cpmv("q3", "z3"));
	std::cout << "three -> ";three.Display();
	std::cout << "--------------------------------------" << std::endl;
	Cpmv four;
	four=one+two+three;
	std::cout << "four -> ";four.Display();
	return 0;
}
