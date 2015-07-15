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
#include "pileTests.h"
#include "pile.h"

void testerCreation();
void testerAjout1();
void testerAjout2();
void testerRetrait1();
void testerRetrait2();
void testerNombre();

void pile_runTests()
{
  testerCreation();
  testerAjout1();
  testerAjout2();
  testerRetrait1();
  testerRetrait2();
  testerNombre();
}

void testerCreation()
{
  Pile_t pile;
  printf("Test sur pile_creer\n");

  pile = pile_creer();

  assert(pile != NULL);
  assert(pile->taille == 10);
  assert(pile->tete == -1);
  assert(pile->tableau != NULL);

  pile_detruire(pile);
  printf("SUCCES\n\n");
}

void testerAjout1()
{
  Pile_t pile;
  printf("Test sur pile_ajouter : Ajout dans une pile vide\n");
  pile = pile_creer();
  pile_ajouter(pile, (void*) 1);

  assert(pile->tete == 0);
  assert(pile->tableau[0] == (void*) 1);

  pile_detruire(pile);
  printf("SUCCES\n\n");
}

void testerAjout2()
{
  Pile_t pile;
  long i;
  printf("Test sur pile_ajouter : Ajout avec agrandissement de la pile\n");
  pile = pile_creer();
  for (i = 1; i <= 10; i++)
    pile_ajouter(pile, (void*) i);
  pile_ajouter(pile, (void*) 11);

  assert(pile->tete == 10);
  assert(pile->tableau[10] == (void*) 11);

  pile_detruire(pile);
  printf("SUCCES\n\n");
}

void testerRetrait1()
{
  Pile_t pile;
  void* retour;
  printf("Test sur pile_retirer : Retrait dans une pile vide\n");
  pile = pile_creer();
  retour = pile_retirer(pile);

  assert(retour == NULL);

  pile_detruire(pile);
  printf("SUCCES\n\n");
}

void testerRetrait2()
{
  Pile_t pile;
  void* retour;
  printf("Test sur pile_retirer : Retrait d'un élément\n");
  pile = pile_creer();
  pile_ajouter(pile, (void*) 1);
  retour = pile_retirer(pile);

  assert(retour == (void*) 1);
  assert(pile->tete == -1);
  assert(pile->tableau[0] == NULL);

  pile_detruire(pile);
  printf("SUCCES\n\n");
}

void testerNombre()
{
  Pile_t pile;
  int nombre;
  printf("Test sur pile_obtenirNombreElements\n");
  pile = pile_creer();
  nombre = pile_obtenirNombreElements(pile);

  assert(nombre == 0);

  pile_detruire(pile);
  printf("SUCCES\n\n");
}
