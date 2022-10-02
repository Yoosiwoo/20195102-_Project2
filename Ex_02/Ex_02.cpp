#include <iostream>
#include <math.h>
#include <ctime>
#include <string>
using namespace std;

//p.160 2�� ����
inline double calc_volume(double r)
{
	double result;
	result = (4.0 / 3.0 * 3.14 * pow(r, 3));
	return result;
}

int main()
{
	double x, y;

	cout << "�������� �Է��Ͻÿ�: ";
	cin >> x;

	y = calc_volume(x);

	cout << "���� ���Ǵ� " << y << endl;

	return 0;
}

//p.162 9�� ����
int main()
{
	int dice1, dice2;
	int result;

	srand((unsigned int)time(NULL));

	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;

	result = dice1 + dice2;

	cout << "������� �ֻ���: " << dice1 << "+" << dice2 << "=" << result << endl;

	if (result == 7 || result == 11)
		cout << "����ڰ� �̰���ϴ�." << endl;
	else if (result == 2 || result == 3 || result == 12)
		cout << "����ڰ� �����ϴ�." << endl;

	return 0;
}

//p.164 13�� ����
bool in_Upper(string str)
{
	for (auto& c : str)
		if (isupper(c))
			return true;
	return false;
}

bool in_Lower(string str)
{
	for (auto& c : str)
		if (islower(c))
			return true;
	return false;
}

bool in_Number(string str)
{
	for (auto& c : str)
		if (48 <= c && c <= 57)
			return true;
	return false;
}

int main()
{
	string pw;

	cout << "��ȣ�� �Է��Ͻÿ�: ";
	cin >> pw;

	if (in_Upper(pw) && in_Lower(pw) && in_Number(pw))
		cout << "�����մϴ�." << endl;
	else
		cout << "�������� �ʽ��ϴ�." << endl;

	return 0;
}