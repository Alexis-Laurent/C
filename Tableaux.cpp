#include <iostream>
#include <vector>

using namespace std;

int main()
{
	// Tableau 
	vector<int> const tableau_de_int{ 10, 20, 30 };

	cout << "Le premier element est " << tableau_de_int[0] << ".\n";
	cout << "Le deuxieme element est " << tableau_de_int[1] << ".\n";
	cout << "Le troisieme element est " << tableau_de_int[2] << ".\n";
	return 0;

	// Taille d'un tableau 
	vector<int> const tableau_int{ 1, 2, 3, 4 };

	auto const taille{ size(tableau_int) };
	cout << "Mon tableau contient " << taille << " elements.\n";
	return 0;


	// Longueur d'une chaine de caracteres
	string const phrase{ "Voici une phrase normale." };
	cout << "La longueur de cette phrase est : " << size(phrase) << " caracteres.\n";
	return 0;
}
