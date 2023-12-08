// queue.cpp -- Queue�� Customer �޼����
#include "queue.h"
#include <cstdlib>         // (�Ǵ� stdlib.h) rand()�� ����

// Queue �޼����
Queue::Queue(int qs) : qsize(qs)
{
    front = rear = NULL;    // �Ǵ� nullptr
    items = 0;
}

Queue::~Queue()
{
    Node * temp;
    while (front != NULL)   	// ť�� ���� ��� ���� ������
    {
        temp = front;       	// �Ӹ� �׸��� �ּҸ� �ӽ÷� �����Ѵ�
        front = front->next;	// front�� �� ���� �׸����� �ٽ� �����Ѵ�
        delete temp;        	// ������ �Ӹ� ��带 �����Ѵ�
    }
}

bool Queue::isempty() const
{
    return items == 0;
}

bool Queue::isfull() const
{
    return items == qsize;
}

int Queue::queuecount() const
{
    return items;
}

// ť�� �׸��� �߰��Ѵ�
bool Queue::enqueue(const Item & item)
{
    if (isfull())
        return false;
    Node * add = new Node;  // ��带 �����Ѵ�
// �����ϸ�, new�� std::bad_alloc exception�� �߻���Ų��
    add->item = item;       // ť�� ��� ������
    add->next = NULL;       // �Ǵ� nullptr;
    items++;
    if (front == NULL)      // ť�� ��� ������
        front = add;        // �׸��� �Ӹ��� �ִ´�
    else
        rear->next = add;   // �׷��� ������ ������ �ִ´�
    rear = add;             // rear�� �� ��带 �����ϰ� �����
    return true;
}

// �Ӹ� �׸��� item ������ �ְ� ť���� �����Ѵ�
bool Queue::dequeue(Item & item)
{
    if (front == NULL)
        return false;
    item = front->item;     // ť�� �Ӹ� �׸��� item�� �����Ѵ�
    items--;
    Node * temp = front;    // �Ӹ� �׸��� ��ġ�� �ӽ÷� �����Ѵ�
    front = front->next;    // front�� �� ���� �׸����� �ٽ� �����Ѵ�
    delete temp;            // ������ �Ӹ� �׸��� �����Ѵ�
    if (items == 0)
        rear = NULL;
    return true;
}

// customer �޼���

// when�� ������ ������ �ð��̴�
// ���� �ð��� when���� �����ȴ�
// ó�� �ð��� 1, 2, 3 �߿��� �������� �� ���� �����ȴ�
void Customer::set(long when)
{
    processtime = std::rand() % 3 + 1;
    arrive = when; 
}