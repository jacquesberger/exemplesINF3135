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
#include <errno.h>
#include <stdio.h>

#define TAILLE_BUFFER 50

int main(int argc, char** argv)
{
  FILE* fichier;
  char buffer[TAILLE_BUFFER + 1];

  fichier = fopen("fichier.txt", "r");
  if (fichier == NULL)
  {
    printf("Erreur %d\n", errno);
    return 1;
  }

  printf("Contenu du fichier :\n\n");
  while (fgets(buffer, TAILLE_BUFFER, fichier) != NULL)
    printf("%s", buffer);

  if (fclose(fichier) == EOF)
    printf("Erreur lors de la fermeture du fichier.\n");

  return 0;
}
