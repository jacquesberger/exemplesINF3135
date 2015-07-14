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
#include <assert.h>
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "pile.h"
#include "trim.h"

#define TAILLE_BUFFER 40

void lectureDonnees(Pile_t);
void affichageResultats(Pile_t);

int main(int argc, char** argv)
{
  Pile_t pile;

  printf("Entrez une séquence de mots, une ligne vide lorsque terminé.\n");
  pile = pile_creer();

  lectureDonnees(pile);
  affichageResultats(pile);

  pile_detruire(pile);

  return 0;
}

void lectureDonnees(Pile_t pile)
{
  char buffer[TAILLE_BUFFER + 1];
  int go;
  char* copie;

  do
  {
    fgets(buffer, TAILLE_BUFFER, stdin);
    trim(buffer);
    if (!strcmp(buffer, ""))
    {
      go = 0;
    } else {
      go = 1;
      copie = malloc(TAILLE_BUFFER + 1);
      assert(copie != NULL);
      strcpy(copie, buffer);
      pile_ajouter(pile, copie);
    }
  } while (go);
}

void affichageResultats(Pile_t pile)
{
  char* copie;

  printf("Taille de la pile : %d\n", pile_obtenirNombreElements(pile));
  if (pile_obtenirNombreElements(pile) > 0)
    printf("Contenu de la pile :\n");

  while(pile_obtenirNombreElements(pile))
  {
    copie = pile_retirer(pile);
    printf("%s\n", copie);
    free(copie);
  }
}
