#include <iostream>
#include <fstream>
#include <string>

//Дан текстовый файл, каждая строка которого изображает целое число, дополненное
//слева и справа несколькими пробелами.Вывести количество этих чисел и их
//сумму.

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	string nameFile = "testing.txt";
	int input; 
	int digit = 0; 
	char ch;
	int sum = 0, count = -1;
	ofstream fout;
	bool flag = true;
	 
	fout.open(nameFile); 

	if (!fout.is_open()) {
		cout << "ERROR" << endl;
	}
	else {
		cout << "Введите данные файла типа int - введите 0, чтобы закончить: ";
		while (flag) { 
			cin >> input; 
			flag = input != 0;  
			fout << " ";
			fout << input; 
	
		}

		fout.close();
	}

	ifstream fin;

	fin.open(nameFile); 


	if (!fin.is_open()) {
		cout << "ERROR" << endl;
	}
	else {
		while (fin.get(ch)) {
			count++;
			sum += digit;
			fin >> digit;
		}
	}

	fin.close();

	cout << "Кол-во чисел: " << count << endl;
	cout << "Сумма чисел: " << sum << endl;

	return 0;
}