Voici ma solution "un tout petit peu tiré par les cheveux" pour ce défi.

J'ai posté la version trouver.c et lisible.c.
Le vrai badcode est trouver.c.
La deuxième est là pour mieux comprendre le code, sinon c'est globalement illisible.

J'aurais pu essayer d'aller plus loin dans l'horreur avec des define mais je me suis dit que c'était suffisant.

Un script shell est fourni pour compiler et lancer le programme avec les arguments des exemples fournis, ainsi qu'un petit test sous valgrind.

Par conséquent gcc et valgrind sont nécessaires pour lancer le script.

Il faut certainement donner les droits d'exécution (un ptit chmod +x launch.sh devrait faire l'affaire).

Et pour tester le programme sans le script, il faut le lancer avec :

./trouver "mot à trouver" "phrase à analyser" (avec les guillemets)

Seule déception, j'ai abandonné la gestion des accents donc cela ne fonctionnera pas si le mot à trouver en comporte un.

PS : Ce programme est certifié sans fork bomb même si j'ai hésité un petit peu.
