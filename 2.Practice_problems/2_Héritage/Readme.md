 **Problem  1 :**

      Cr�ez une classe de base Animal avec une m�thode son(). Ensuite, d�finissez deux sous
      classes :

          � Chien, o� la m�thode son() affiche �Woof�.
          � Chat, o� la m�thode son() affiche �Meow�.

      Instanciez les deux classes et appelez leur m�thode son().


 **Problem  2 :**

    Mod�lisez un syst�me domotique avec h�ritage et liste d�initialisation. Cr�ez une classe de
    base Appareil avec deux attributs prot�g�s : id (entier) et statut (cha�ne de caract�res).
    Le constructeur de Appareil utilise une liste d�initialisation pour d�finir ces attributs. La
    m�thode afficherStatut() affiche le message suivant : Appareil #ID : STATUT.
    Le statut peut prendre l�une des valeurs suivantes : "actif", "en veille" ou "hors ligne".
    Cr�ez ensuite trois classes d�riv�es avec les h�ritages suivants :
       � Lumiere h�rite en public, ajoute intensite, et affiche un message personnalis�.
       � Thermostat h�rite en protected, ajoute temperature, et affiche un message personnalis�.
       � Camera h�rite en private, ajoute resolution, et affiche un message personnalis�.

    Chaque classe utilise une liste d�initialisation pour d�finir les attributs h�rit�s et sp�cifiques.
    Dans leur m�thode afficher(), elles appellent afficherStatut() puis affichent un message
    court d�crivant leur �tat propre.

  **Problem  3 :**

 Dans un syst�me de gestion de transport, on mod�lise une classe Vehicule. Deux types d�riv�s
 sont d�finis :
 � Voiture avec une m�thode ajouterBagage(int kg) qui v�rifie si le poids n�exc�de pas
 500 kg, sinon affiche �Trop lourd�.
 � Moto avec une m�thode activerModeSport(bool actif) qui affiche un message si le
 mode est activ� .
 Stocker des objets Voiture et Moto dans un vecteur de Vehicule*, puis utiliser dynamic_cast
 pour identifier leur type r�el et appeler la m�thode sp�cifique, en v�rifiant toujours le cast.