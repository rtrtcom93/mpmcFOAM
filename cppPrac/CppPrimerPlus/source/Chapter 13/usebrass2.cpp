// usebrass2.cpp -- ����(polymorphism)�� �����ϴ� ����
// brass.cpp�� �Բ� �������Ѵ�
#include <iostream>
#include <string>
#include "brass.h"
const int CLIENTS = 4;

int main()
{
   using std::cin;
   using std::cout;
   using std::endl;

   Brass * p_clients[CLIENTS];
   std::string temp;
   long tempnum;
   double tempbal;
   char kind;

   for (int i = 0; i < CLIENTS; i++)
   {
       cout << "���� �̸��� �Է��Ͻʽÿ�: ";
       getline(cin,temp);
       cout << "���� ���� ��ȣ�� �Է��Ͻʽÿ�: ";
       cin >> tempnum;
       cout << "���� ���� �ܾ��� �Է��Ͻʽÿ�: $";
       cin >> tempbal;
       cout << "Brass ���´� 1, "
            << "BrassPlus ���´� 2�� �Է��Ͻʽÿ�: ";
       while (cin >> kind && (kind != '1' && kind != '2'))
           cout <<"1 �ƴϸ� 2, �� �� �ϳ��� �Է��Ͻʽÿ�: ";
       if (kind == '1')
           p_clients[i] = new Brass(temp, tempnum, tempbal);
       else
       {
           double tmax, trate;
           cout << "���� ��� �ѵ��� �Է��Ͻʽÿ�: $";
           cin >> tmax;
           cout << "���� ��� �������� �Ҽ��� �������� "
                << "�Է��Ͻʽÿ�: ";
           cin >> trate;
           p_clients[i] = new BrassPlus(temp, tempnum, tempbal,
                                        tmax, trate);
        }
        while (cin.get() != '\n')
            continue;
   }
   cout << endl;
   for (int i = 0; i < CLIENTS; i++)
   {
       p_clients[i]->ViewAcct();
       cout << endl;
   }
              
   for (int i = 0; i < CLIENTS; i++)
   {
       delete p_clients[i];  // �޸𸮸� �����Ѵ�
   }
   cout << "���α׷��� �����մϴ�.\n";
   return 0; 
}
