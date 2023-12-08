// stack1.h -- ���� ADT�� ���� Ŭ���� ����
#ifndef STACK1_H_
#define STACK1_H_
typedef unsigned long Item;

class Stack
{
private:
	enum {MAX = 10};	// Ŭ������ ���
	Item * pitems;		// ���� �׸���� �����Ѵ�
	int size;		// ���ÿ� ��� �ִ� ������ ��
	int top;		// ������ ����� �׸��� ��Ÿ����
public:
	Stack(int n = 10);	// n���� ���Ҹ� ���� ������ �����Ѵ�
	Stack(const Stack & st);
	~Stack();
	bool isempty() const;
	bool isfull() const;
	// push()�� ������ ���� �� ������ false��, �ƴϸ� true�� �����Ѵ�
	bool push(const Item & item);	// ���ÿ� �׸��� �߰��Ѵ�
	// pop()�� ������ ��� ������ false��, �ƴϸ� true�� �����Ѵ�
	bool pop(Item & item);			// ����� �׸��� ���� item�� �ִ´�
	Stack & operator=(const Stack & st);
};

#endif
