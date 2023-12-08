// move.h -- Move 클래스 선언
#ifndef MOVE_H_
#define MOVE_H_

class Move
{
private:
	double x;
	double y;
public:
	Move(double a = 0, double b = 0);	// x, y를 a, b로 설정한다
	void showmove() const;			// 현재의 x, y 값을 출력한다
	Move add(const Move & m) const;
    void reset(double a = 0, double b = 0);	// x, y를 a, b로 재설정한다
};

#endif
