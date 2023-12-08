// classic.h -- 13�� ���α׷��� ���� 1�� ���� Cd Ŭ������ Classic Ŭ���� ����
#ifndef CLASSIC_H_
#define CLASSIC_H_

// ���� Ŭ����
class Cd		// CD ��ũ�� ��Ÿ����
{
private:
	char performers[50];	// ������
	char label[20];			// ���ݻ�
	int selections;			// ��� ��
	double playtime;		// �� ������ ���� �ð�
public:
	Cd(char * s1 = "None", char * s2 = "None", int n = 0, double x = 0.0);
	virtual ~Cd() { }
	virtual void Report() const;	// CD�� ��� �����͸� �����Ѵ�
	Cd & operator=(const Cd & d);
};

// Cd Ŭ�����κ��� �Ļ���Ų Classic Ŭ����
class Classic : public Cd
{
private:
    char primary_work[50];
public:
    // �����ڵ�
	Classic(char * primary = "None", char * s1 = "None", char * s2 = "None", int n = 0, double x = 0.0);
	Classic(const Cd & d, char * primary);
    // ��� �Լ�
    virtual void Report() const;
    // �����ε� ������
    Classic & operator=(const Classic & x);
};

#endif
