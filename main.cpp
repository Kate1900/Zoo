#include "Animals.h"
#include "Mammals.h"
#include "Lioness.h"
#include "Monkey.h"
#include "Reptiles.h"
#include "Snake.h"
#include "Lizard.h"

#include <iostream>
using namespace std;


int main()
{
	TAnimals newAnimal;
	newAnimal.SetCvet(10);
	newAnimal.SetKolvokonechnostei(2);
	cout << "Kolvokonechnoste= " << newAnimal.GetKolvokonechnostei() << endl;
	TMammals newMammal;
	newMammal.SetSherst(true);
	newMammal.SetCvet(4);
	newMammal.SetKolvokonechnostei(4);
	cout << "newMammal says" << newMammal.Golos() << endl;
	TLioness newLioness;
	cout << "lioness says " << newLioness.Golos() << endl;
	cout << "lioness is eating " << newLioness.Eating() << "now" << endl;
	cout << "Kolvokonechnostei= " << newLioness.GetKolvokonechnostei() << endl;
	TMonkey Pasha;
	cout << "Pasha skazal " << Pasha.Golos() << endl;
	cout << "Pasha echo " << Pasha.Echo() << endl;
	cout << "Kolvokonechnostei= " << Pasha.GetKolvokonechnostei() << endl;
	TReptiles newReptilia;
	newReptilia.SetSscale(true);
	newReptilia.SetCvet(3);
	newReptilia.SetKolvokonechnostei(4);
	cout << "newReptilia says " << newReptilia.Golos() << endl;
	TSnake Gena;
	cout << "Gena says " << Gena.Golos() << endl;
	cout << "Gena have " << Gena.teeth() << " teeth" << endl;
	TLizard Jack;
	cout << "Jack says " << Jack.Golos() << endl;
	cout << "Jack have " << Jack.teeth() << " teeth" << endl;
	cout << "Jack have " << Jack.Shell() << "shell" << endl;

	TMammals** zoo = 0;
	int numberOfAnimals = 0;
	cout << "number of animals = " << endl;
	cin >> numberOfAnimals;
	zoo = new TMammals * [numberOfAnimals];
	for (int i = 0; i < numberOfAnimals; i++)
	{
		cout << "Which one? " << endl;
		int a;
		cin >> a;
		if (a == 0)
			zoo[i] = new TMonkey();
		else
			zoo[i] = new TLioness();
		cout << "Kolvokonechnostei = " << zoo[i]->GetKolvokonechnostei() << endl;
		cout << "Givotnoe " << i << "govorit " << zoo[i]->Golos() << endl;
		break;
	}
	TReptiles** zoo_1 = 0;
	int numberOfAnimals_1;
	cout << "number of animals_1 = " << endl;
	cin >> numberOfAnimals_1;
	zoo_1 = new TReptiles * [numberOfAnimals_1];
	for (int i = 0; i < numberOfAnimals_1; i++)
	{
		cout << "Which one? " << endl;
		int b;
		cin >> b;
		if (b == 0)
			zoo_1[i] = new TSnake();
		else
			zoo_1[i] = new TLizard();
		cout << "Kolvokonechnostei = " << zoo_1[i]->GetKolvokonechnostei() << endl;
		cout << "Givotnoe " << i << "govorit " << zoo_1[i]->Golos() << endl;
	}
	return 0;
}