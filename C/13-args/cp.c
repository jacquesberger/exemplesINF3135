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
#include <stdlib.h>

#define TAILLE_BUFFER 50

void validerUsage(int);
int copie(FILE*, FILE*);

int main(int argc, char** argv)
{
  FILE* source;
  FILE* destination;
  int close1, close2;

  validerUsage(argc); 

  source = fopen(argv[1], "r");
  if (source == NULL)
  {
    printf("Erreur fichier source %d\n", errno);
    return 1;
  }

  destination = fopen(argv[2], "w");
  if (destination == NULL)
  {
    printf("Erreur fichier destination %d\n", errno);
    fclose(source);
    return 1;
  }

  if (!copie(source, destination))
    printf("Erreur lors de la copie du fichier.\n");

  close1 = fclose(source);
  close2 = fclose(destination);
  if (close1 == EOF || close2 == EOF)
  {
    printf("Erreur lors de la fermeture d'un fichier.\n");
    return 1;
  }

  return 0;
}

void validerUsage(int argc)
{
  if (argc != 3)
  {
    printf("Utilisation du programme cp :\ncp <fichier source> <fichier destination>\n\n");
    exit(1);
  }
}

int copie(FILE* in, FILE* out)
{
  char buffer[TAILLE_BUFFER + 1];

  while (fgets(buffer, TAILLE_BUFFER, in) != NULL)
  {
    if (fputs(buffer, out) == EOF)
      return 0;
  }

  return 1;
}
