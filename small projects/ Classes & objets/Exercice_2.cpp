#include <iostream>
#include <string>
#include <vector>
using namespace std;

class clsEtution
{
private:
    vector <float>notes;


public:

    float obtenirMoyenne() {
        if (notes.empty()) return 0;

        float somme = 0;
        for (int note : notes) {
            somme += note;
        }
        return somme / notes.size();
    }

    void ajouterNote(float note) {
        if (note <= 20 && note >= 0) {
           notes.push_back(note);
           cout << "Note ajoutée : " << note << endl;
           cout << "Nouvelle moyenne : " << obtenirMoyenne() << endl;
        }
        else {
            cout << "Erreur : note invalide (" << note << "), doit être entre 0 et 20." << endl;
        } 
    }
     int  trouverNote(float note){
     for (int i : notes) {
         if (notes[i] == note) return i;
         return -1;
     }
 }
  void supprimerNote(float note) {
     int index = trouverNote(note);
     if (index != -1) {
         notes.erase(notes.begin() + index);
         cout << "Note supprimée : " << note << endl;
         cout << "Nouvelle moyenne : " << obtenirMoyenne() << endl;
     }
     else {
         cout << "Erreur : note " << note << " non trouvée." << endl;
     }
 }
};

int main()
{
     clsEtution etudion;
        etudion.ajouterNote(20);
        etudion.ajouterNote(13);
        etudion.ajouterNote(50);
        etudion.ajouterNote(17);
        etudion.obtenirMoyenne();
        etudion.supprimerNote(13);
    return 0;
}
