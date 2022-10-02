#include <iostream>
#include <string>
#include<ctime>
using namespace std;

int main()
{
	//p.115 1번 문제
	string x, y;

	cout << "첫 번째 문자열: ";
	cin >> x;
	cout << "두 번째 문자열: ";
	cin >> y;

	if (x == y)
		cout << "2개의 문자열은 같습니다." << endl;
	else
		cout << "2개의 문자열은 다릅니다." << endl;

	return 0;
	//p.117 10번 문제

	for (int x = 1; x < 100; x++)
		for (int y = 1; y < 100; y++)
			for (int z = 1; z < 100; z++)
				if (pow(x, 2) + pow(y, 2) == pow(z, 2))
					cout << x << " " << y << " " << z << endl;

	return 0;

	//p.119 16번 문제
	int cash = 50;
	const int goal = 250;

	int bets, win; 
	bool result; 
	int wins = 0; 
	int total = 0;
	srand((unsigned int)time(NULL));
	cout << "초기 금액 $" << cash << endl;
	cout << "목표 금액 $" << goal << endl;

	for (int game = 0; game < 1000; game++)
	{
		cash = 50, bets = 0, win = 0;
		while (true)
		{	
			bets++;
			if ((double)rand() / RAND_MAX < 0.5)
			{
				cash++;
				win++;
			}
			else
				cash--;

			if (cash <= 0)
			{
				result = false;
				break;
			}
			if (cash >= goal)
			{
				result = true;
				break;
			}
		}

		if (result == true)
			wins++; 
		total += bets; 
	}

	cout << "1000 중의 " << wins << "번 승리" << endl;
	cout << fixed; 
	cout.precision(6); 
	cout << "이긴 확률=" << wins / 1000.0 * 100.0 << endl;
	cout << "평균 배팅 횟수 = " << total / 1000.0 << endl;

	return 0;
}