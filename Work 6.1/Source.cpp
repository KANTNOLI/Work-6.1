#include <iostream>
#include <fstream>
#include <string>

//��� ��������� ����, ������ ������ �������� ���������� ����� �����, �����������
//����� � ������ ����������� ���������.������� ���������� ���� ����� � ��
//�����.

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
		cout << "������� ������ ����� ���� int - ������� 0, ����� ���������: ";
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

	cout << "���-�� �����: " << count << endl;
	cout << "����� �����: " << sum << endl;

	return 0;
}