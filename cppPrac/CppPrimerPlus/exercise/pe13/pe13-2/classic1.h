// classic1.h -- 13�� ���α׷��� ���� 2�� ���� Cd Ŭ������ Classic Ŭ���� ����
#ifndef CLASSIC1_H_
#define CLASSIC1_H_

// ���� Ŭ����
class Cd		// CD ��ũ�� ��Ÿ����
{
private:
	char * performers;		// ������
	char * label;			// ���ݻ�
	int selections;			// ��� ��
	double playtime;		// �� ������ ���� �ð�
public:
	Cd(const Cd & d);
	Cd(char * s1 = "None", char * s2 = "None", int n = 0, double x = 0.0);
	virtual ~Cd();
	virtual void Report() const;	// CD�� ��� �����͸� �����Ѵ�
	Cd & operator=(const Cd & d);
};

// Cd Ŭ�����κ��� �Ļ���Ų Classic Ŭ����
class Classic : public Cd
{
private:
    char * primary_work;
public:
    // �����ڵ�
	Classic(char * primary = "None", char * s1 = "None", char * s2 = "None", int n = 0, double x = 0.0);
	Classic(const Cd & d, char * primary);
	Classic(const Classic & x);
	~Classic();
    // ��� �Լ�
    virtual void Report() const;
    // �����ε� ������
    Classic & operator=(const Classic & x);
};

#endif
