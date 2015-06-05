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
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include "hilo-prive.h"

void hilo()
{
  int cible, saisie;
  int coups = 10;
  enum Bool enJeu = VRAI;

  cible = obtenirNombreAleatoire();
  do
  {
    saisie = saisirNombre(coups);
    coups--;
    if (saisie == cible)
    {
      enJeu = FAUX;
      printf("Bravo, vous avez trouvé le nombre mystère : %d\n\n", cible);
    }
    else if (coups == 0)
    {
      enJeu = FAUX;
      printf("Vous avez perdu. La cible était : %d\n\n", cible);
    }
    else if (saisie < cible)
      printf("Plus haut\n");
    else
      printf("Plus bas\n");
  } while (enJeu);
}

int obtenirNombreAleatoire()
{
  srand(time(NULL));
  return rand() % 100;
}

int saisirNombre(int coupsRestants)
{
  int valeur;
  char* s = coupsRestants > 1 ? "s" : "";
  printf("Entrez une valeur supérieure ou égale à 0 et inférieure à 100 (%d coup%s restant%s) : ",
         coupsRestants, s, s);
  scanf("%d", &valeur);
  return valeur;
}
