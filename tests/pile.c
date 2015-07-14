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
#include "pile.h"

#define PILE_TAILLE_DEPART 10

Pile_t pile_creer()
{
  Pile_t pile;
  pile = malloc(sizeof(PileInterne_t));
  assert(pile != NULL);

  pile->taille = PILE_TAILLE_DEPART;
  pile->tete = -1;
  pile->tableau = calloc(PILE_TAILLE_DEPART, sizeof(void*));
  assert(pile->tableau != NULL);

  return pile;
}

void pile_ajouter(Pile_t pile, void* element)
{
  assert(pile != NULL);

  if (pile->tete == pile->taille - 1)
  {
    pile->taille += PILE_TAILLE_DEPART;
    pile->tableau = realloc(pile->tableau, pile->taille * sizeof(void*));
    assert(pile->tableau != NULL);
  }

  pile->tete++;
  pile->tableau[pile->tete] = element;
}

void* pile_retirer(Pile_t pile)
{
  void* element;
  assert(pile != NULL);

  if (pile->tete == -1)
    return NULL;

  element = pile->tableau[pile->tete];
  pile->tableau[pile->tete] = NULL;
  pile->tete--;

  return element;
}

void pile_detruire(Pile_t pile)
{
  assert(pile != NULL);

  free(pile->tableau);
  free(pile);
}

int pile_obtenirNombreElements(Pile_t pile)
{
  assert(pile != NULL);

  return pile->tete + 1;
}
