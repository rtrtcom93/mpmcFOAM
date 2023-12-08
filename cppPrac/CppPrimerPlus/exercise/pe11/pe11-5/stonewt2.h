// stonewt2.h -- Stonewt Ŭ���� ����
#ifndef STONEWT2_H_
#define STONEWT2_H_
class Stonewt
{
private:
	enum {Lbs_per_stn = 14};		// ����� �Ŀ�� ��
	int stone;						// ������(����)
	double pds_left;			// �Ҽ���(�Ŀ��)
	double pounds;				// �Ŀ��� ��Ÿ�� ��ü ����
	char mode;				// 's' = ���� �Ŀ�� ���� ����, 'p' = ���� �Ŀ�� ����, 'd' = �ε��Ҽ��� �Ŀ�� ����
public:
	Stonewt(double lbs, char md = 's');	// double�� �Ŀ�带 ���� ������
	Stonewt(int stn, double lbs, char md = 's');	// stone, lbs�� ���� ������
	Stonewt();										// ����Ʈ ������
	~Stonewt();
	void setmode(char ch);
	Stonewt operator+(const Stonewt & st) const;
	Stonewt operator-(const Stonewt & st) const;
	Stonewt operator*(const Stonewt & st) const;
	friend ostream & operator<<(ostream & os, const Stonewt & st);
};
#endif
