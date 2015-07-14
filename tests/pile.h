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
#ifndef PILE_H
#define PILE_H

typedef struct
{
  int taille;
  int tete;
  void** tableau;
} PileInterne_t;

typedef PileInterne_t* Pile_t;

/* Créer une nouvelle pile.
 * Valeur de retour : Une référence vers la pile nouvellement créée. La pile
 * devra être libérée avec la fonction pile_detruire. */
Pile_t pile_creer();

/* Ajouter un élément dans la pile. Lorsque la taille atteindra sa capacité
 * maximale, elle augmentera sa capacité automatiquement.
 * pile : Une référence vers la pile.
 * element : L'élément à ajouter dans la pile. */
void pile_ajouter(Pile_t pile, void* element);

/* Retirer un élément de la pile.
 * pile : Une référence vers la pile.
 * Valeur de retour : L'élément retiré de la pile, ou NULL si la pile est
 * vide. */
void* pile_retirer(Pile_t pile);

/* Détruire la pile. Ne libère pas la mémoire des éléments contenus dans la
 * pile.
 * pile : Une référence vers la pile. */
void pile_detruire(Pile_t pile);

/* Obtenir le nombre d'éléments présentement dans la pile.
 * pile : Une référence vers la pile.
 * Valeur de retour : Le nombre d'éléments dans la pile. */
int pile_obtenirNombreElements(Pile_t pile);

#endif
