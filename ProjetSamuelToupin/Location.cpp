// But : calculer le montant d'un individu pour la location d'un automobile et l'utilisé.
// Auteur : Samuel Toupin
// Date : 2020-09-16


#include <iostream>


int main()

{


	setlocale(LC_ALL, "");
	// demander nombre de jour pour louer la voiture.
	int nombre1;
	std::cout << "Veuillez entrer le nombre de jour que vous louez la voiture :";
	std::cin >> nombre1;

// nombre de litre d'essence mit dans la voiture
	int nombre2;

	std::cout << "Nombre de litres d'essence mit dans la voiture  :";
		std::cin >> nombre2;

// Nombre de kilomètre parcourus
		int nombre3;

		std::cout << "Nombres de killomètre parcourus :";
		std::cin >> nombre3;
		// prix voiture par jour
		int nombre4 = 45;
		// prix essence 
		int nombre5 = 1.25;
		// prix kilomètre de surplus
		int nombre6 = 0.05;
		// 250 km par jour gratuit.
		int nombre7 = 250;

		int somme;
		// Prix de la voiture
		somme = nombre1 * nombre4 ;

		int somme1;
        // prix essence
		somme1 = nombre3 * nombre5;

		int somme2;
		// prix kilomètre
		somme2 = nombre3 - (nombre1 * nombre7);
		somme2 * nombre6;
		// total argent

		int somme3;

		somme3 = somme + somme1 + somme2;
		std::cout << "Le montant total est de " << somme3 << " dollars. ";

		/* Plan

		3jours    100 litres   1500 kilomètres = 207.5$
			





        */

	






















	return 0;
}
