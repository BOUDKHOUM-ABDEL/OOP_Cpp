#pragma once
#include <iostream>
using namespace std;
class clsAppareil {
private: 
	int _id;
	string _statut;
public: 
	clsAppareil(int id, string statut) {
		_id = id;
		_statut = statut;
	}

	void afficherStatut() {
		cout << "Appareil : "<< _id << " : " << _statut
	}
};
//Mod�lisez un syst�me domotique avec h�ritage et liste d�initialisation.Cr�ez une classe de
//base Appareil avec deux attributs prot�g�s : id(entier) et statut(cha�ne de caract�res).
//Le constructeur de Appareil utilise une liste d�initialisation pour d�finir ces attributs.La
//m�thode afficherStatut() affiche le message suivant : Appareil #ID : STATUT.