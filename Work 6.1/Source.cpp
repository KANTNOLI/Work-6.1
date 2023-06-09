#include <iostream>
#include <fstream>
#include <string>

//ƒан текстовый файл, кажда€ строка которого изображает целое число, дополненное
//слева и справа несколькими пробелами.¬ывести количество этих чисел и их
//сумму.

using namespace std;

int main() {
	ofstream myFile;
	int sum, count;
	
	myFile.open("testing.txt");
	if (myFile.is_open())
	{
		int digit;
		while (myFile.eof())
		{
			cout << "soijsh" << endl;
		}



		myFile.close();
	}


	return 0;
}