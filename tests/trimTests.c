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
#include <assert.h>
#include <stdio.h>
#include <string.h>
#include "trimTests.h"
#include "trim.h"

void run(char* original, char* expected);

void trim_runTests()
{
  run("test", "test");
  run(" test", "test");
  run("test ", "test");
  run(" test ", "test");
  run("test\n", "test");
  run("   test    ", "test");
  run("", "");
  run("  \n   \n", "");
  run("te st", "te st");
  run(" te st ", "te st");
}

void run(char* original, char* expected)
{
  char buffer[41];
  printf("Fonction trim avec valeur '%s'\n", original);
  strcpy(buffer, original);
  trim(buffer);
  printf("Resultat '%s' avec le resultat attendu '%s'\n", buffer, expected);
  if (strcmp(buffer, expected) == 0)
    printf("SUCCES\n\n");
  else
  {
    printf("ECHEC\n\n");
    assert(0);
  }
}
