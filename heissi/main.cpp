#include <iostream>
#include <cstdlib>

using namespace std;
int x, y, m, k = 0, r = 1;
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
	cout << endl;
	cout << "  1 2 3 " << endl;
	m = 0;
	for (int y = 0; y < 3; y++)
	{
		m++;
		cout << m << " ";
		for (int x = 0; x < 3; x++)
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
		cout << r;
		cout << "Podaj wspolrzedne [x y]: ";
		cin >> x;
		cout << " ";
		cin >> y;

		if (r % 2 == 0)
		{	
			r++;
			system("cls");
			plansza[x - 1][y - 1].stan_pola = pole::stan::krzyzyk;
			rysuj();
		}
		else
		{
			r++;
			system("cls");
			plansza[x-1][y-1].stan_pola = pole::stan::kolko;
			rysuj();
		}
	}
	cin.get();
	return 0;
}