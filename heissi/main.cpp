#include <iostream>

using namespace std;
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
int main()
{
	for (int y=0;y<3;y++)
	{
		for (int x=0;x<3;x++)
		{
			if (plansza[x][y].stan_pola == pole::stan::puste)
			{
				cout << " ";
			}
			else if (plansza[x][y].stan_pola == pole::stan::kolko)
			{
				cout <<"O";
			}
			else
			{
				cout << "X";
			}
		}
		cout << endl;
	}

	cout << "Hello World" << endl;
	cin.get();
	return 0;
}