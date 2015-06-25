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
  int* tableau;
  int taille;
  int i;

  printf("Entrez la taille du tableau : ");
  scanf("%d", &taille);

  tableau = (int*) calloc(taille, sizeof(int));
  if (!tableau)
  {
    printf("Erreur d'allocation de mémoire : %s\n", strerror(errno));
    exit(1);
  }

  for (i = 0; i < taille; i++)
  {
    tableau[i] = i;
    printf("%d\n", tableau[i]);
  }

  free(tableau);
  return 0;
}
