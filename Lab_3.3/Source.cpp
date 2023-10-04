//Lab_03_3.cpp
//<Яцик Мар'ян>
//Лабораторна робота № 3.3
//Розгалуження, задане графіком функції.
// Варіант25.

#include<iostream>
#include<cmath>

using namespace std;

int main()
{
	double x;
	double R;
	double y;
	cout << "R ="; cin >> R;
	cout << "x ="; cin >> x;
	if (x <= -2)
		y = 3 + x;
	else
		if (-2 < x <= 4)
			y = (4 - R * x - 2 * R - x) / 6;
		else
			if (4 < x <= 8 - R)
				y = -R;
			else
				if (8 - R < x <= 8)
					y = sqrt(R - x * x + 16 * x - 64 - R);
				else
					if (8 < x <= 8 + R)
						y = sqrt(R - x * x + 16 * x - 64 - R);
					else
						y = -R;
	cout << endl;
	cout << "y=" << y << endl;
	cin.get();
		return 0;
}