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

void passageParCopie(int);
void passageParReference(int*);

int main(int argc, char** argv)
{
  int valeur = 5;

  passageParCopie(valeur);
  printf("Valeur apres un passage par copie : %d\n", valeur);

  passageParReference(&valeur);
  printf("Valeur apres un passage par reference : %d\n", valeur);

  return 0;
}

void passageParCopie(int nombre)
{
  nombre = 200;
}

void passageParReference(int* nombre)
{
  *nombre = 300;
}
