// stack.h -- ���� ADT�� ���� Ŭ���� ����
#ifndef STACK_H_
#define STACK_H_

typedef unsigned long Item;

class Stack
{
private:
    enum {MAX = 10};    // Ŭ������ ���
    Item items[MAX];    // ���� �׸���� �����Ѵ�
    int top;            // ������ ����� �׸��� ��Ÿ����
public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    // push()�� ������ ���� �� ������ false��, �ƴϸ� true�� �����Ѵ�
    bool push(const Item & item);   // ���ÿ� �׸��� �߰��Ѵ�
    // pop()�� ������ ��� ������ false��, �ƴϸ� true�� �����Ѵ�
    bool pop(Item & item);          // ����� �׸��� ���� item�� �ִ´�
};
#endif

