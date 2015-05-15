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

#define TAILLE 10

int main(int argc, char** argv)
{
  int vide[TAILLE];
  int initialiser[TAILLE];
  int valeurs[TAILLE] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
  int i;

  printf("Afficher le contenu d'un tableau non initialisé :\n");
  for (i = 0; i < TAILLE; i++)
  {
    printf("%d\n", vide[i]);
  }

  printf("\n\n");

  printf("Afficher le contenu du tableau déjà initialisé :\n");
  for (i = 0; i < TAILLE; i++)
  {
    printf("%d\n", valeurs[i]);
  }

  printf("\n\n");

  printf("Initialiser et afficher un tableau :\n");
  for (i = 0; i < TAILLE; i++)
  {
    initialiser[i] = i * 3;
    printf("%d\n", initialiser[i]);
  }

  return 0;
}
