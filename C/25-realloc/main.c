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

const int tailleDefaut = 8;
const int tailleEtendue = 30;

int main(int argc, char** argv)
{
  char* chaine;
  char* chaine2;

  chaine = (char*) malloc(tailleDefaut);
  if (!chaine)
  {
    printf("Erreur d'allocation de mémoire : %s\n", strerror(errno));
    exit(1);
  }

  strcpy(chaine, "Jacques");
  printf("Chaîne : %s\n", chaine);

  chaine2 = (char*) realloc(chaine, tailleEtendue);
  if (!chaine2)
  {
    printf("Erreur d'allocation de mémoire : %s\n", strerror(errno));
    free(chaine);
    exit(1);
  }
  chaine = chaine2;

  strcpy(chaine, "Jacques Berger");
  printf("Chaîne : %s\n", chaine);

  free(chaine);
  return 0;
}
