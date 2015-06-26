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
#include <stdlib.h>
#include <string.h>
#include <errno.h>

int main(int argc, char** argv)
{
  int** matrice;
  int nbColonnes;
  int nbRangees;
  int i;
  int j;
  int compteur = 0;
  int erreur = 0;

  printf("Entrez le nombre de colonnes : ");
  scanf("%d", &nbColonnes);
  printf("Entrez le nombre de rangées : ");
  scanf("%d", &nbRangees);

  matrice = (int**) calloc(nbRangees, sizeof(int*));
  if (!matrice)
  {
    printf("Erreur d'allocation de mémoire : %s\n", strerror(errno));
    exit(1);
  }

  for (i = 0; i < nbRangees; i++)
  {
    matrice[i] = (int*) calloc(nbColonnes, sizeof(int));
    if (!matrice[i])
    {
      erreur = 1;
      break;
    }
  }

  if (erreur) {
    printf("Erreur d'allocation de mémoire : %s\n", strerror(errno));
  } else {
    for (i = 0; i < nbRangees; i++)
    {
      for (j = 0; j < nbColonnes; j++)
      {
        matrice[i][j] = ++compteur;
        printf("%d ", matrice[i][j]);
      }
      printf("\n");
    }
  }

  for (i = 0; i < nbRangees; i++)
    free(matrice[i]);
  free(matrice);

  return erreur;
}
