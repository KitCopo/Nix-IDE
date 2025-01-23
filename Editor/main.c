/*
SUPORTA APENAS WINDOWS 
INTUITO DE SER UTILIZADO PARA PROJETOS NA KAIROS GAME ENGINE 
COMEÇO 21/01/2025 FIM &&/&&/&&
*/

// NIX IDE MAIN CODE

#include <stdio.h> 
#include "Vanguarde/vanguarde.h"

#define System_Windows 'w'

int main()
{ 
  if (Compatibility() == System_Windows)
  {
    printf("Hello World");
  }
  return 0;     
}