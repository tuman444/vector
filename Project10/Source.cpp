#include <iostream> // подключение библиотеки, вывод на консоль
#include <string> // библиотека дл€ работы со строками
#include <windows.h> // библиотека windows.h ввод вывод рус. текста
#include <vector> // подключение библиотеки vector
#include <algorithm> //библиотека дл€ работы с векторами
using namespace std; // подключение пространстово имен дл€ ввода с клавиатуры и вывод на экран

int main() // основна€ функци€
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251); //ввод вывод рус. текста

	vector <int> vect; // объ€вление вектора <тип> название 
	vect = { 1, 9, 5, 6 ,2, 4, 8 }; // инициализаци€ вектора

	//вывод вектора спомощью цикла for
	int k = vect.size();  // размер массива
	sort(vect.begin(), vect.end());

	for (size_t i = 0; i < vect.size(); i++)
	{
		cout << vect[i] << endl;
	}

}