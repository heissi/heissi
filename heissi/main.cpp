#include <iostream>
#include <cstdlib>

using namespace std;
int x, y, k = 0, r = 0;
class pole
{
public:
	enum stan
	{
		kolko = 0,
		krzyzyk = 1,
		puste = 2
	};
	stan stan_pola;
	pole()
	{
		stan_pola = stan::puste;
	}
};
pole plansza[3][3];
void rysuj()
{
	cout << " -------------------------------- " << endl;
	cout << "|        by Aneta Brzycka        |" << endl;
	cout << " -------------------------------- " << endl;
	for (int y = 0; y<3; y++)
	{
		for (int x = 0; x<3; x++)
		{
			if (plansza[x][y].stan_pola == pole::stan::puste)
			{
				cout << " |";
			}
			else if (plansza[x][y].stan_pola == pole::stan::kolko)
			{
				cout << "O|";
			}
			else
			{
				cout << "X|";
			}
		}
		cout << endl;
	}

}
int main()
{
	rysuj();
	while(k==0)
	{
		r++;
		cout << r << endl;
		cout << "Podaj wspolrzedne [x y]: ";
		cin >> x;
		cout << " ";
		cin >> y;
		if (r % 2 == 0)
		{
			cout << "kolko" << endl;
		}
		else
		{
			cout << "krzyzyk" << endl;
		}
	}
	cin.get();
	return 0;
}