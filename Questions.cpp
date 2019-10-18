#include <iostream>

using namespace std;

int main()
{	   
	cout << "Quel est votre prenom ?\n";
	string nomUtilisateur;
	cin >> nomUtilisateur;

	cout << "\nQuel age avez-vous ?\n";
	int ageUtilisateur(0);
	cin >> ageUtilisateur;

	cout << "\nCombien vaut pi ?\n";
	double nombrePi(-1.);
	cin >> nombrePi;

	cout << "\nVous vous appelez " << nomUtilisateur << ", Vous avez " << ageUtilisateur << " ans! et vous pensez que Pi vaut " << nombrePi << ".\n";
	return 0;
}