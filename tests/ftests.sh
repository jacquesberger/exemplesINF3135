#!/bin/bash

mkdir tests_resultats

echo "Test sans mot"
./exec < tests_fonctionnels/vide.txt > tests_resultats/vide.txt
diff tests_fonctionnels/vide_resultat.txt tests_resultats/vide.txt

echo "Test 1 seul mot"
./exec < tests_fonctionnels/unmot.txt > tests_resultats/unmot.txt
diff tests_fonctionnels/unmot_resultat.txt tests_resultats/unmot.txt

echo "Test moins de 10 mots"
./exec < tests_fonctionnels/moins10mots.txt > tests_resultats/moins10mots.txt
diff tests_fonctionnels/moins10mots_resultat.txt tests_resultats/moins10mots.txt

echo "Test avec un agrandissement"
./exec < tests_fonctionnels/1resize.txt > tests_resultats/1resize.txt
diff tests_fonctionnels/1resize_resultat.txt tests_resultats/1resize.txt

echo "Test avec 3 agrandissements"
./exec < tests_fonctionnels/3resize.txt > tests_resultats/3resize.txt
diff tests_fonctionnels/3resize_resultat.txt tests_resultats/3resize.txt

rm -rf tests_resultats

echo "FIN"
