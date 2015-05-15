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
  int fibo[TAILLE] = {0, 1, 1, 2, 3, 5, 8, 13, 21, 34};
  int* pointeur;
  int* parcours;
  int i;

  pointeur = fibo;

  printf("Premier élément avec tableau : %d\n", fibo[0]);
  printf("Premier élément avec pointeur : %d\n\n", *pointeur);

  printf("Cinquième élément avec tableau : %d\n", fibo[4]);
  printf("Cinquième élément avec pointeur : %d\n\n", *(pointeur + 4));

  printf("Parcours du tableau :\n");
  for (i = 0; i < TAILLE; i++)
  {
    printf("%d\n", fibo[i]);
  }

  printf("\nParcours avec pointeur :\n");
  i = 0;
  parcours = fibo;
  while (parcours != (fibo + TAILLE))
  {
    printf("%d\n", *parcours);
    parcours++;
  }

  return 0;
}
