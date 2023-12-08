// vector.h -- ��� ���¿� <<�� ����ϴ�, Vector Ŭ����
#ifndef VECTOR_H_
#define VECTOR_H_
namespace VECTOR
{
	class Vector
	{
	private:
		double x;		// ���� ����
		double y;		// ���� ����
		double mag;		// ������ ����
		double ang;		// ������ ����
		char mode;		// 'r' = ���� ��ǥ, 'p' = �� ��ǥ
	// ������ �����ϴ� private �޼����
		void set_mag();
		void set_ang();
		void set_x();
		void set_y();
	public:
		Vector();
		Vector(double n1, double n2, char form = 'r');
		void set(double n1, double n2, char form = 'r');
		~Vector();
		double xval() const {return x;}		// x���� �����Ѵ�
		double yval() const {return y;}		// y���� �����Ѵ�
		double magval() const {return mag;}	// ũ�⸦ �����Ѵ�
		double angval() const {return ang;}	// ������ �����Ѵ�
		void polar_mode();			// ��带 'p'�� �����Ѵ�
		void rect_mode();			// ��带 'r'�� �����Ѵ�
	// ������ �����ε�
		Vector operator+(const Vector & b) const;
		Vector operator-(const Vector & b) const;
		Vector operator-() const;
		Vector operator*(double n) const;
	// ������ �Լ�
		friend Vector operator*(double n, const Vector & a);
		friend ostream & operator<<(ostream & os, const Vector & v);
	};

}	// namespace VECTOR1�� ��
#endif
