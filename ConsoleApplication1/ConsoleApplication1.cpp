#include <iostream>
#include <cmath>
#include <clocale>
using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	double x;
	cout << "Кол-во студентов "; cin >> x;
	int y;
	cout << "Кол-во яблок "; cin >> y;
	int delezhka;
	if (x <= y)
		//Проверка возможности выполнения условия
		delezhka = y / x;//колво яблок на одного человека
	else
		cout << "Введенные данные не верны" << endl;
	//В случае не подходящих условий
	double otv = y - delezhka * x;
	//Формула для расчета при верных условиях
	cout << "Остаток яблок " << otv << endl;
	//Вывод ответа
}