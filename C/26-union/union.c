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

typedef struct
{
  char nom[21];
  int anneeNaissance;
  unsigned short estUnMammifere;
  union
  {
    int nombreBebes;
    char details[51];
  } extra;
} Animal_t;

int main(int argc, char** argv)
{
  Animal_t chat;
  strcpy(chat.nom, "Fluffy");
  chat.anneeNaissance = 2008;
  chat.estUnMammifere = 1;
  chat.extra.nombreBebes = 5;

  printf("Valeur entière : %d\n", chat.extra.nombreBebes);
  printf("Valeur string : %s\n", chat.extra.details);

  strcpy(chat.extra.details, "Anomalie");

  printf("Valeur entière : %d\n", chat.extra.nombreBebes);
  printf("Valeur string : %s\n", chat.extra.details);

  return 0;
}
