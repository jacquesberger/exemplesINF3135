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
  int montant = 0;
  int choix;

  printf("1-Tempura de crevettes 6.00$\n");
  printf("2-Soupe Miso           3.00$\n");
  printf("Choisissez une entrée>");

  scanf("%d", &choix);

  if (choix == 1)
    montant += 6;
  else if (choix == 2)
    montant += 3;

  printf("1-Sashimis         24.00$\n");
  printf("2-Poulet au beurre 19.00$\n");
  printf("Choisissez un plat principal>");

  scanf("%d", &choix);

  if (choix == 1)
    montant += 24;
  else if (choix == 2)
    montant += 19;

  printf("1-Crème glacée napolitaine 1.00$\n");
  printf("2-Sorbet au durion         9.00$\n");
  printf("Choisissez un dessert>");

  scanf("%d", &choix);

  if (choix == 1)
    montant += 1;
  else if (choix == 2)
    montant += 9;

  printf("Montant total de la facture : %d.00$\n", montant);

  return 0;
}
