# Annecy_W_Games-C

Cet application est réalisé par langage C lors de cours à EPSI.
La fonctionnalité de stocker les données, d'affichage les données sont compris.

<img width="80%" src="https://user-images.githubusercontent.com/93679283/156256185-3575f3c9-0942-491a-bffb-f87ffebf3005.JPG">

<br>
<br>

<h4>Introduction</h4>
  
Le but de notre projet est de mettre en place une application qui permettra à Jean-Jacques Daniel, président de la fédération française de parachutisme, à organiser les W-Games 2020 à Annecy, compétition mondialement reconnue dans la communauté des semi-professionnels du saut en Wingsuit. Il veut inscrire les participants jusqu’à 10 au maximum, et lui permettre de modifier ou rajouter les données du participant. Il peut rajouter 2 nationalités encore et modifier le nom ou le rang du participant. Il faut faire attention de saisir le nom ou le rang, parce que cette application éteindra si on saisit le nom ou le rang déjà existant. Après l’inscription, les 3 jurys vont noter leur score sur 10, et le 
gagnant est celui qui gagne le plus haut. Aussi, on peut voir le résultat par rapport à la nationalité, donc on peut savoir quelle nationalité des participants gagne la plus.


<h4>Team composition</h4>

On est une equipe de 3: Sangmin SHIM , Wejdene FOUGHALI et Aminata MBATHIE. <br>
On s’occupe des Etapes 1 et 2 tous ensemble et en plus Aminata MBATHIE a écrit la documentation sur lequel explique le codage. On a travaillé sur place à l’école et sur Discord à distance. Malheureusement on n’a pas réussi de coder Etape 3, parce que on galère pour faire le tri (Sorting) et la classement (Arrangement) avec la structure « Inscription ». 

<h4>Overview</h4>
M.JJD est trop clair sur ses ambitions, il attend de son programme un certain nombre de fonctionnalités. Le programme est composé de 4 étapes, les trois dernières sont à leur tour composées de plusieurs options.
<br>
L'étape 0 est constitué de la mise en forme de l'accueil avec un grand W-ANNECY.<br>
L'étape 1 est de l'inscription des participants, l'étape 2 de la compétition et l'etape3 des résultats.<br> 
Chaque participant a un numéro de dossard, un nom, une nationalité (avec un code) et un rang mondial. Ils font partie de structure appelé « Inscription ».
Tout au long du programme, on a utilisé des fonctions, des structures.
<br>

<h4>Les fonctions utilisées</h4>

(1) accueil – Afficher le nom de cette application « W Annecy » <br>
(2) option_1 – Inscrire un participant <br>
(3) option_2 – Modifier une inscription <br>
(4) option_3 – Lister les inscrits <br>
(5) option_4 – Ajouter une nouvelle nationalité <br>
(6) menu – Afficher les fonctions accessibles d’Etape 1 <br>
(7) compétition – Saisir le temps de vol du participant(facultatif) et la note artistique sur 10 <br>
(8) les structures pour l'inscription, celle pour la compétition et celle pour les résultats. <br>
(Pourtant on n’arrive pas à réaliser l’Etape 3 à cause de manque de connaissance sur la gestion de données dans Structure. On ne pouvait pas faire le classement.)<br>
Dans le main, on a l'ensemble des fonctions et des structures, la sélection du menu (l'inscription, l'ajout d'un nom, d'une nationalité, d'un rang mondiale, la modification), la compétition et les résultats. 

<h4>Les variables utilisées</h4>

(1) nbp = nombre de participants. Dès que l’on inscrit un participant, cela augmente de 1. <br>
(2) nco = numéro de code au cas où on rajoute 1 ou 2 nationalité(s). Dès que l’on rajoute un code, cela 
 augmente de 1. <br>
(3) ndd = numéro de dossard. <br>
(4) nda = numéro d’affiche . Pour l’étape 2 Compétition, cela permet d’afficher un tableau sur 
 lequelle on saisit le temps de vol du participant et la note artistique concernant le nombre 
 de participants (=nbp). <br>
(5) code_vérifier = vérifier si le code de nationalité est déjà existant ou pas. <br>
(6) code_valider = Dans la condition où on rajoute le code de nationalité, cela vérifie que on peut 
 inscrire le(s) code(s) rajouté(s) comme ceux déjà existants. <br>
 <br>
En somme l'application correspond ou presque aux exigences de M.JJD, elle respecte les règles de celui-ci et à toutes les fonctionnalités souhaitées. L'étape 3 a été particulièrement difficile, la mise en place et l'affichage du tableau avec les positions les notes et le calcul de la moyenne.
