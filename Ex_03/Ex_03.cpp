#include <iostream>
#include <string>
using namespace std;

int main()
{
	//p.353 1�� ����
	int num;

	cout << "�� ���� ������ �Է��մϱ�? ";
	cin >> num;

	int* p = new int[num];

	for (int i = 0; i < num; i++) {
		cout << "������ �Է��Ͻÿ� : ";
		cin >> p[i];
	}

	cout << "�Էµ� ������: ";
	for (int i = 0; i < num; i++)
		cout << p[i] << ", ";
	cout << endl;

	delete[] p;

	return 0;


	//p.353 2�� ����
	int num;

	cout << "�󸶳� ���� �̸��� �Է� �Ͻðڽ��ϱ�? ";
	cin >> num;

	string* name = new string[num];

	for (int i = 0; i < num; i++) {
		cout << "�̸� �Է� # " << i + 1 << ": ";
		cin >> name[i];
	}
	cout << endl;

	cout << "������ �̸� ����Դϴ�." << endl;
	for (int i = 0; i < num; i++)
		cout << "�̸� #" << i + 1 << ": " << name[i] << endl;

	delete[] name;

	return 0;
}