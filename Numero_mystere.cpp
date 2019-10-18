#include <iostream>
#include <vector>
#include <ctime>

using namespace std;

int main()
{
	srand(time(nullptr));	// Nombre aléatoire
	int numeroMystere = rand() % 100 + 1;
	
	cout << "Nombres d'essaies : \n";
	int maxEssaie = 0;
	cin >> maxEssaie;
	cin.ignore();

	int numeroChoisie = 0;

	for (int i = 0; i < maxEssaie; i++)
	{
		cout << "Entrer un nombre entre 0 et 100 : \n";
		cin >> numeroChoisie;
		cin.ignore();

		if (numeroChoisie == numeroMystere)
		{
			cout << "Gagne ! \n";
			break;
		}
		else if (numeroChoisie > numeroMystere)
		{
			cout << "Trop grand \n\n";
		}
		else if (numeroChoisie < numeroMystere)
		{
			cout << "Trop petit \n\n";
		}
		if (i == maxEssaie - 1)
		{
			cout << "Perdu ! \n";
			break;
		}
	}
	return 0;
}