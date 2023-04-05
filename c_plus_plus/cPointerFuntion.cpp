#include <iostream>
using namespace std;

// ��������
void swap1(int *x, int *y);
// ��������
void swap2(int &x, int &y);

int main ()
{
   // �ֲ���������
   int a = 100;
   int b = 200;
 
   cout << "����ǰ��a ��ֵ��" << a << endl;
   cout << "����ǰ��b ��ֵ��" << b << endl;

   /* ���ú���������ֵ
    * &a ��ʾָ�� a ��ָ�룬������ a �ĵ�ַ 
    * &b ��ʾָ�� b ��ָ�룬������ b �ĵ�ַ 
    */
  // swap1(&a, &b);
   swap2(a, b);
   cout << "������a ��ֵ��" << a << endl;
   cout << "������b ��ֵ��" << b << endl;
 
   return 0;
}


// ��������
void swap1(int *x, int *y)
{
   int temp;
   temp = *x;    /* �����ַ x ��ֵ */
   *x = *y;        /* �� y ��ֵ�� x */
   *y = temp;    /* �� x ��ֵ�� y */
  
   return;
}

// ��������
void swap2(int &x, int &y)
{
   int temp;
   temp = x; /* �����ַ x ��ֵ */
   x = y;    /* �� y ��ֵ�� x */
   y = temp; /* �� x ��ֵ�� y  */
  
   return;
}
