#include <iostream>
#include <fstream>
#include <string>

//��� ��������� ����, ������ ������ �������� ���������� ����� �����, �����������
//����� � ������ ����������� ���������.������� ���������� ���� ����� � ��
//�����.

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