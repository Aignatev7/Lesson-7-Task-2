#include <iostream>
#define SUB(x,y) ((x)-(y)) // ���������� ������ SUB

int main(int argc, char** argv)
{
	int a = 6;
	int b = 5;
	int c = 2;
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;
}








/*
  ������ 2. ������ SUB
� ���� ������� �� ��������� ������� ������.

���� ������ � ���������� ������ SUB, ������� ������ �������� ����� ���� �� ����� � �������������� ��������� �������:

int main (int argc, char** argv)
{
	int a = 6;
	int b = 5;
	int c = 2;
	std::cout << SUB(a, b) << std::endl;
	std::cout << SUB(a, b) * c << std::endl;
	std::cout << SUB(a, b + c) * c << std::endl;
}
��������� ������ �������� ���������, ��������� ����:

������ ������ ���������
�������
1
2
-2
*/
