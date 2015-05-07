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

int main(int argc, char** argv)
{
  int entier = 12;
  int* p1;

  char caractere = 'A';
  char* p2;

  p1 = &entier;

  printf("Affichage de entier : %d\n", entier);
  printf("Affichage de p1 : %p\n", p1);
  printf("Affichage du contenu à l'adresse de p1 : %d\n\n", *p1);

  p2 = &caractere;

  printf("Affichage de caractere : %c\n", caractere);
  printf("Affichage de p2 : %p\n", p2);
  printf("Affichage du contenu à l'adresse de p2 : %c\n\n", *p2);

  *p2 = 'C';
  printf("Affichage de caractere après modification de la valeur contenue dans p2 : %c\n", caractere);

  (*p2)++;
  printf("Affichage de caractere après incrémentation de la valeur contenue dans p2 : %c\n\n", caractere);

  return 0;
}
