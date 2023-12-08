// move.h -- Move Ŭ���� ����
#ifndef MOVE_H_
#define MOVE_H_

class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0);	// x, y�� a, b�� �����Ѵ�
	void showmove() const;			// ������ x, y ���� ����Ѵ�
	Move add(const Move & m) const;
    void reset(double a = 0, double b = 0);	// x, y�� a, b�� �缳���Ѵ�
};

#endif
