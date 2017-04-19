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
		cout << endl;
		cout << "Podaj wspolrzedne [x y]: ";
		cin >> x;
		if((x<0)||(x>3))
		{
			system("cls");
			main();
		}
		cout << " ";
		cin >> y;
		if ((y < 0) || (y > 3))
		{
			system("cls");
			main();
		}

		if (r % 2 == 0)
		{	
			if (plansza[x - 1][y - 1].stan_pola == pole::stan::puste)
			{
				r++;
				system("cls");
				plansza[x - 1][y - 1].stan_pola = pole::stan::krzyzyk;
				rysuj();
				if (((plansza[0][0].stan_pola == pole::stan::krzyzyk)&(plansza[1][0].stan_pola == pole::stan::krzyzyk)&(plansza[2][0].stan_pola == pole::stan::krzyzyk)) || ((plansza[0][1].stan_pola == pole::stan::krzyzyk)&(plansza[1][1].stan_pola == pole::stan::krzyzyk)&(plansza[2][1].stan_pola == pole::stan::krzyzyk)) || ((plansza[0][2].stan_pola == pole::stan::krzyzyk)&(plansza[1][2].stan_pola == pole::stan::krzyzyk)&(plansza[2][2].stan_pola == pole::stan::krzyzyk)) || ((plansza[0][0].stan_pola == pole::stan::krzyzyk)&(plansza[0][1].stan_pola == pole::stan::krzyzyk)&(plansza[0][2].stan_pola == pole::stan::krzyzyk)) || ((plansza[1][0].stan_pola == pole::stan::krzyzyk)&(plansza[1][1].stan_pola == pole::stan::krzyzyk)&(plansza[1][2].stan_pola == pole::stan::krzyzyk)) || ((plansza[2][0].stan_pola == pole::stan::krzyzyk)&(plansza[2][1].stan_pola == pole::stan::krzyzyk)&(plansza[2][2].stan_pola == pole::stan::krzyzyk)) || ((plansza[0][0].stan_pola == pole::stan::krzyzyk)&(plansza[1][1].stan_pola == pole::stan::krzyzyk)&(plansza[2][2].stan_pola == pole::stan::krzyzyk)) || ((plansza[2][0].stan_pola == pole::stan::krzyzyk)&(plansza[1][1].stan_pola == pole::stan::krzyzyk)&(plansza[0][2].stan_pola == pole::stan::krzyzyk)))
				{
					cout << endl;
					cout << "Wygral Gracz 2!";
					cin.get();
					break;
					break;
				}
				if ((plansza[0][0].stan_pola != pole::stan::puste)&(plansza[0][1].stan_pola != pole::stan::puste)&(plansza[0][2].stan_pola != pole::stan::puste)&(plansza[1][0].stan_pola != pole::stan::puste)&(plansza[1][1].stan_pola != pole::stan::puste)&(plansza[1][2].stan_pola != pole::stan::puste)&(plansza[2][0].stan_pola != pole::stan::puste)&(plansza[2][1].stan_pola != pole::stan::puste)&(plansza[2][2].stan_pola != pole::stan::puste))
				{
					cout << endl;
					cout << "Remis";
					cin.get();
					break;
					break;
				}
			}
			else
			{ 
				system("cls");
				main();
			}
		}
		else
		{
			if (plansza[x - 1][y - 1].stan_pola == pole::stan::puste)
			{
				r++;
				system("cls");
				plansza[x - 1][y - 1].stan_pola = pole::stan::kolko;
				rysuj();
				if (((plansza[0][0].stan_pola == pole::stan::kolko)&(plansza[1][0].stan_pola == pole::stan::kolko)&(plansza[2][0].stan_pola == pole::stan::kolko)) || ((plansza[0][1].stan_pola == pole::stan::kolko)&(plansza[1][1].stan_pola == pole::stan::kolko)&(plansza[2][1].stan_pola == pole::stan::kolko)) || ((plansza[0][2].stan_pola == pole::stan::kolko)&(plansza[1][2].stan_pola == pole::stan::kolko)&(plansza[2][2].stan_pola == pole::stan::kolko)) || ((plansza[0][0].stan_pola == pole::stan::kolko)&(plansza[0][1].stan_pola == pole::stan::kolko)&(plansza[0][2].stan_pola == pole::stan::kolko)) || ((plansza[1][0].stan_pola == pole::stan::kolko)&(plansza[1][1].stan_pola == pole::stan::kolko)&(plansza[1][2].stan_pola == pole::stan::kolko))||((plansza[2][0].stan_pola == pole::stan::kolko)&(plansza[2][1].stan_pola == pole::stan::kolko)&(plansza[2][2].stan_pola == pole::stan::kolko))||((plansza[0][0].stan_pola == pole::stan::kolko)&(plansza[1][1].stan_pola == pole::stan::kolko)&(plansza[2][2].stan_pola == pole::stan::kolko))||((plansza[2][0].stan_pola == pole::stan::kolko)&(plansza[1][1].stan_pola == pole::stan::kolko)&(plansza[0][2].stan_pola == pole::stan::kolko)))
				{
					cout << endl;
					cout << "Wygral Gracz 1!";
					cin.get();
					break;
					break;
				}
				if((plansza[0][0].stan_pola != pole::stan::puste)&(plansza[0][1].stan_pola != pole::stan::puste)&(plansza[0][2].stan_pola != pole::stan::puste)&(plansza[1][0].stan_pola != pole::stan::puste)&(plansza[1][1].stan_pola != pole::stan::puste)&(plansza[1][2].stan_pola != pole::stan::puste)&(plansza[2][0].stan_pola != pole::stan::puste)&(plansza[2][1].stan_pola != pole::stan::puste)&(plansza[2][2].stan_pola != pole::stan::puste))
				{
					cout << endl;
					cout << "Remis";
					cin.get();
					break;
					break;
				}
			}
			else
			{
				system("cls");
				main();
			}
		}
	}
	cin.get();
	return 0;
}