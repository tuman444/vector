#include <iostream> // ����������� ����������, ����� �� �������
#include <string> // ���������� ��� ������ �� ��������
#include <windows.h> // ���������� windows.h ���� ����� ���. ������
#include <vector> // ����������� ���������� vector
#include <algorithm> //���������� ��� ������ � ���������
using namespace std; // ����������� ������������� ���� ��� ����� � ���������� � ����� �� �����

int main() // �������� �������
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251); //���� ����� ���. ������

	vector <int> vect; // ���������� ������� <���> �������� 
	vect = { 1, 9, 5, 6 ,2, 4, 8 }; // ������������� �������

	//����� ������� �������� ����� for
	int k = vect.size();  // ������ �������
	sort(vect.begin(), vect.end());

	for (size_t i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << endl;
	}

}