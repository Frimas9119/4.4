#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main()
{
	double x, xp, xk, dx,r, y;
	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;
	cout << "r = "; cin >> r;
	cout << fixed;
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;
	x = xp;
	while (x <= xk)
	{
		if (x >= -8 - r)
			y = -r;
		else
			if (x > -8 - r && x <= -8 + r)
				y = -r + sqrt(pow(r, 2) - pow((x + 8), 2));
			else
				if (x > -8 + r && x <= 2)
					y = -r + ((x - (-8 + r))*(2 + r)) / (2 - (-8 + r));
				else
					if (x > 2 && x <= 6)
						y = 0;
					else
						y = pow((x - 6), 2);
		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "---------------------------" << endl;
	return 0;
}