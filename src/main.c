//
// Created by Stanislau Senkevich 24.02.2024
//

// Client file

#include "m_interface.h"
#include <stdio.h>

int main(void) {
  wchar_t *first, *second;
  printf("Enter first string\n");
  scanf("%ls", first);
  printf("Enter second string\n");
  scanf("%ls", second);

  int res = compare_by_sh_position(first, second);

  switch (res) {
  case 1:
    printf("First sentence");
    break;
  case -1:
    printf("Second sentence");
    break;
  case 0:
    printf("Equal");
    break;
  case 2:
    printf("One sentence (or both of them) has no ш");
    break;
  }

  return 0;
}