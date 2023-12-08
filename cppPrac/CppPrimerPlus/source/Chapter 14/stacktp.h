// stacktp.h -- ���� ���ø�
#ifndef STACKTP_H_
#define STACKTP_H_
template <class Type>
class Stack
{
private:
    enum {MAX = 10};    // Ŭ������ ���
    Type items[MAX];    // ���� �׸���� �����Ѵ�
    int top;            // ������ ����� �׸��� ��Ÿ����
public:
    Stack();
    bool isempty();
    bool isfull();
    bool push(const Type & item); // ���ÿ� �׸��� �߰��Ѵ�
    bool pop(Type & item);        // ����� �׸��� ���� item�� �ִ´�
};

template <class Type>
Stack<Type>::Stack()
{
    top = 0;
}

template <class Type>
bool Stack<Type>::isempty()
{
    return top == 0;
}

template <class Type>
bool Stack<Type>::isfull()
{
    return top == MAX;
}

template <class Type>
bool Stack<Type>::push(const Type & item)
{
    if (top < MAX)
    {
        items[top++] = item;
        return true;
    }
    else
        return false;
}

template <class Type>
bool Stack<Type>::pop(Type & item)
{
    if (top > 0)
    {
        item = items[--top];
        return true;
    }
    else
        return false; 
}

#endif
