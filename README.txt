*******************Readmi-Projet-Vampire***********************

## A propo du projet:

J'ai conservé quelque classes de mini projet et j'ai ajouté plusieurs d'autre, chaque classe a été crée dans un fichier séparer des autres pour mieux facilité l'accès par la suite.
Une interface graphique des informations de chaque personnage a été généré après l'exécution de la commande ci-dessous.


#Clan choisi:

Personnage de Assamite : Thetmes 
Personnage de Brujah : Damsel 
-->Lien pour les detailles des personnages (http://bindusara.free.fr/web/affichage_fiche.php?IDENTIFIANT=200676&NOM=Thetmes&PRENOM=)

##Requirements:

-->cpp6.3.0 
-->Gtkmm-3.0

##Editeur de texte utilisé : 

CLion, un EDI pour C/C++.

--> Il génère des fichiers de configuration ne sont pas nécessaire pour l'excursion de programme.

##Repertoire du projet contient :

-->Dossier Classes (.h qui contient les attributs et les prototypes de la classe et .cpp qui contient la définition des méthodes et leur implémentation).
-->Dossier GUI (graphical user interface)( 3 classes pour optimiser les taches de l'affichage)
-->Fichier Main.cpp (les données de personnages et l'appel de l'interface)
-->Fichier vampire (excutable)
-->fichier README.txt (la description des fonctionnalités du projet)

##Ligne de commande pour exécuté le programme:

& g++ main.cpp -o vampire `pkg-config gtkmm-3.0 --cflags --libs`

-->il créé le fichier exucutable ./Vimpire pour lancer la fenetre.

& ./Vampire

Puis il demande à l'utilisateur de saisir le nom d'un personnage.
& Entrer le nom de la personnage :
soit : Thetmes ou Damsel

-->finalement l'affichage de l'interface.

##Composition de la fenetre:

-->La fenêtre est composée des sections sous forme de Label contenu les informations des personnages.




