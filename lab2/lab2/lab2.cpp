#include <iostream>
#include <cmath>

using namespace std;
/*
int main()
{
	int a, b;
	cout << "podaj a ";
	cin >> a;
	cout << "podaj b ";
	cin >> b;
	cout << a + b;
	return 0;

	//zadanie 1 i 2
}
*/
/*
int main()
{
	double a, b, c;
	cout << "podaj a, b, c " << endl;
	cin >> a >> b >> c;
	if (a == 0 && (c - b) == 0)
	{
		cout << "NWR" << endl;
	}
	else if (a == 0 && (c - b) > 0)
	{
		cout << "BR" << endl;
	}
	else if ((c-b)==0)
	{
		cout << "NWR" << endl;
	}
	else
	{
		cout << (c - b) / a<<endl;
	}
	return 0;
	
	//zad 3
}
*/

int main()
{
	double a, b, c, a1,b1,c1;
	double w, wy, wx;
	cout << "podaj a,b,c (ax + by=c) " << endl;
	cin >> a >> b >> c;
	cout << "podaj a1,b1,c1  (a1x + b1y=c1) " << endl;
	cin >> a1 >> b1 >> c1;
	w = a * b1 - a1 * b;
	wx = c * b1 - c1 * b;
	wy = a * c1 - a1 * c;
	cout << "x = " << wx / w << " y = " << wy / w;
	return 0;

	//zad 4
}

/*
int main()
{
	int a, b, c,d;
	cout << "podaj a,b,c"<<endl;
	cin >> a >> b >> c;
	d = (b * b) - (4 * a * c);
	if (d > 0)
	{
		cout << "x1 = " << (b - sqrt(d)) / (2 * a) << endl;
		cout << " x2 = " << (-b - sqrt(d)) / (2 * a);
	}
	else if(d==0)
	{
		cout <<"x0 = " << (-b) / (2 * a);
	}
	else
	{
		cout << "nie ma pierwiastkow";
	}
	return 0;

	//zad 5
}
*/