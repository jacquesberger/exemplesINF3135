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

struct Personne {
  char nom[20];
  char prenom[20];
  unsigned short sexe;
  unsigned short age;
};

int main(int argc, char** argv)
{
  struct Personne etudiant;
  struct Personne* pointeur;

  strcpy(etudiant.nom, "Berger");
  strcpy(etudiant.prenom, "Jacques");
  etudiant.sexe = 1;
  etudiant.age = 19;

  pointeur = &etudiant;

  pointeur->sexe = 2;
  strcpy(pointeur->prenom, "Jacqueline");
  pointeur->age = 75;

  printf("Nom : %s\nPrenom : %s\nSexe : %d\nAge : %d\n\n", etudiant.nom, etudiant.prenom, etudiant.sexe, etudiant.age);

  return 0;
}
