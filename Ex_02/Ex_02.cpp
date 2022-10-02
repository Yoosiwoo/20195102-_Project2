#include <iostream>
#include <math.h>
#include <ctime>
#include <string>
using namespace std;

//p.160 2번 문제
inline double calc_volume(double r)
{
	double result;
	result = (4.0 / 3.0 * 3.14 * pow(r, 3));
	return result;
}

int main()
{
	double x, y;

	cout << "반지름을 입력하시오: ";
	cin >> x;

	y = calc_volume(x);

	cout << "구의 부피는 " << y << endl;

	return 0;
}

//p.162 9번 문제
int main()
{
	int dice1, dice2;
	int result;

	srand((unsigned int)time(NULL));

	dice1 = rand() % 6 + 1;
	dice2 = rand() % 6 + 1;

	result = dice1 + dice2;

	cout << "사용자의 주사위: " << dice1 << "+" << dice2 << "=" << result << endl;

	if (result == 7 || result == 11)
		cout << "사용자가 이겼습니다." << endl;
	else if (result == 2 || result == 3 || result == 12)
		cout << "사용자가 졌습니다." << endl;

	return 0;
}

//p.164 13번 문제
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

	cout << "암호를 입력하시오: ";
	cin >> pw;

	if (in_Upper(pw) && in_Lower(pw) && in_Number(pw))
		cout << "안전합니다." << endl;
	else
		cout << "안전하지 않습니다." << endl;

	return 0;
}