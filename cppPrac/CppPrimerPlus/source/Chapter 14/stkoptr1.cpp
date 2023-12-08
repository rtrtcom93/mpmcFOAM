// stkoptr1.cpp -- �����͵��� ������ �׽�Ʈ�Ѵ�
#include <iostream>
#include <cstdlib>     // rand(), srand()�� ����
#include <ctime>       // time()�� ����
#include "stcktp1.h"
const int Num = 10;
int main()
{
    std::srand(std::time(0)); // ���� �߻��⿡ ���� �Ѹ���
    std::cout << "������ ũ�⸦ �Է��Ͻʽÿ�: ";
    int stacksize;
    std::cin >> stacksize;
// stacksize ũ���� �� ������ �����Ѵ�
    Stack<const char *> st(stacksize); 

// in basket
    const char * in[Num] = {
            " 1: ���ȣ", " 2: �ָ���",
            " 3: �̸���", " 4: ������",
            " 5: �̼���", " 6: �ɼ���",
            " 7: �ڹ���", " 8: ȫ�浿",
            " 9: �����", "10: �Ͼ߽�"
            };
// out basket
    const char * out[Num];

    int processed = 0;
    int nextin = 0;
    while (processed < Num)
    {
        if (st.isempty())
            st.push(in[nextin++]);
        else if (st.isfull())
            st.pop(out[processed++]);
        else if (std::rand() % 2  && nextin < Num)   // Ȯ�� 50 : 50
            st.push(in[nextin++]);
        else
            st.pop(out[processed++]);
    }
    for (int i = 0; i < Num; i++)
        std::cout << out[i] << std::endl;

    std::cout << "���α׷��� �����մϴ�.\n";
    return 0; 
}
