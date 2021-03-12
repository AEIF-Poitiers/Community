gcc -g -Wall -Wextra -pedantic -std=c99 -o trouver trouver.c

echo "pour la blague :"
valgrind ./trouver "free" "dans le programme"

echo "trouver(\"Louis\", \"Je suis Louis, un adorateur d'Ocaml!\")"
./trouver "Louis" "Je suis Louis, un adorateur d'Ocaml!"
echo ""

echo "trouver(\"Vincent\", \"Alexis monte une étagère\")"
./trouver "Vincent" "Alexis monte une étagère"
echo ""

echo "trouver(\"ma\", \"Qui s'appelle Thomas?\")"
./trouver "ma" "Qui s'appelle Thomas?"

