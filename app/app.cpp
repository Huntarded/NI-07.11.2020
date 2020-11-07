#include <iostream>

using namespace std;

int main() {

	int wysokosc = 5;
	int szerokosc = 10;


	for (size_t i = 0; i < wysokosc; i++)

	{
		for (size_t j = 0; j < szerokosc; j++)
		{
			if (i % (wysokosc - 1) == 0 | j % (szerokosc - 1) == 0)
				cout << 'X';
			else
				cout << ' ';
		}
		cout << endl;
	}
}