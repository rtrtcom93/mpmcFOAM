// stonewt1.h -- ������ Stonewt Ŭ���� ����
#ifndef STONEWT1_H_
#define STONEWT1_H_
class Stonewt
{
private:
    enum {Lbs_per_stn = 14};      // ����� �Ŀ�� ��
    int stone;                    // ������(����)
    double pds_left;              // �Ҽ���(�Ŀ��)
    double pounds;                // �Ŀ��� ��Ÿ�� ��ü ����
public:
    Stonewt(double lbs);          // double�� �Ŀ�带 ���� ������
    Stonewt(int stn, double lbs); // stone, lbs�� ���� ������
    Stonewt();                    // ����Ʈ ������
    ~Stonewt();
    void show_lbs() const;        // �Ŀ�� �������� ���
    void show_stn() const;        // ����� �Ŀ�� ���� �������� ���
// ��ȯ �Լ���
    operator int() const;
    operator double() const;
};
#endif
