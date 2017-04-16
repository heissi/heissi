#include <iostream>

using namespace std;
class pole
{
public:
	enum stan
	{
		kolko = 0,
		krzyzyk = 1,
		puste = 3
	};
	stan stan_pola;
	pole()
	{
		stan_pola = stan::puste;
	}
};
int main()
{
	cout << "Hello World" << endl;
	cin.get();
	return 0;
}