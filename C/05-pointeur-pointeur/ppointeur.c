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
  int entier = 5;
  int* p1;
  int** p2;

  p1 = &entier;
  p2 = &p1;

  printf("entier : %d\n", entier);
  printf("*p1 : %d\n", *p1);
  printf("**p2 : %d\n", **p2);

  return 0;
}
