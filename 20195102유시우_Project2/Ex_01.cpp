#include <iostream>
#include <string>
#include<ctime>
using namespace std;

int main()
{
	//p.115 1�� ����
	string x, y;

	cout << "ù ��° ���ڿ�: ";
	cin >> x;
	cout << "�� ��° ���ڿ�: ";
	cin >> y;

	if (x == y)
		cout << "2���� ���ڿ��� �����ϴ�." << endl;
	else
		cout << "2���� ���ڿ��� �ٸ��ϴ�." << endl;

	return 0;
	//p.117 10�� ����

	for (int x = 1; x < 100; x++)
		for (int y = 1; y < 100; y++)
			for (int z = 1; z < 100; z++)
				if (pow(x, 2) + pow(y, 2) == pow(z, 2))
					cout << x << " " << y << " " << z << endl;

	return 0;

	//p.119 16�� ����
	int cash = 50;
	const int goal = 250;

	int bets, win; 
	bool result; 
	int wins = 0; 
	int total = 0;
	srand((unsigned int)time(NULL));
	cout << "�ʱ� �ݾ� $" << cash << endl;
	cout << "��ǥ �ݾ� $" << goal << endl;

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

	cout << "1000 ���� " << wins << "�� �¸�" << endl;
	cout << fixed; 
	cout.precision(6); 
	cout << "�̱� Ȯ��=" << wins / 1000.0 * 100.0 << endl;
	cout << "��� ���� Ƚ�� = " << total / 1000.0 << endl;

	return 0;
}