/*
 * Copyright 2015 Jacques Berger
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
#include <stdio.h>
#include <string.h>

#define TAILLE_NOM 40

int main(int argc, char** argv)
{
  char* chaineStatique = "Universite du Quebec a Montreal";
  char buffer[TAILLE_NOM + 1];
  char* pointeur;
  char* pointeur2;
  
  printf("La taille de la chaine statique : %lu\n", strlen(chaineStatique));

  // Construire une chaîne, caractère par caractère
  buffer[0] = 'A';
  buffer[1] = 'l';
  buffer[2] = 'l';
  buffer[3] = 'o';
  buffer[4] = '\0';
  printf("Chaine construite par caractere : %s\n", buffer);

  // Positionner un pointeur sur une partie de la chaîne
  pointeur = chaineStatique + 23;
  printf("Fraction de chaine par pointeur : %s\n", pointeur);

  // Copie
  strcpy(buffer, pointeur);
  printf("Copie : %s\n", buffer);

  // Concaténation
  strcat(buffer, ", ");
  pointeur2 = chaineStatique + 14;
  strncat(buffer, pointeur2, 6);
  printf("Resultat de concatenations : %s\n", buffer);

  // Comparaison
  if (strcmp(buffer, "Montreal, Quebec") == 0)
    printf("Chaines egales\n");

  return 0;
}
