//
// Created by Stanislau Senkevich 24.02.2024
//

// Implementation of m_interface.h functions

#include "locale.h"
#include "m_interface.h"
#include "stddef.h"

/// sh_position
/// Shows the last position of symbol TARGET in string
/// Arguments:
///    str - string(char*)
/// Return:
///    last position of symbol TARGET in string
int sh_position(wchar_t *str, const wchar_t target);

int sh_position(wchar_t *str, const wchar_t target) {
  setlocale(LC_ALL, "RU-ru");
  int pos = -1;
  unsigned long len = sizeof(str) / sizeof(wchar_t);

  for (unsigned long i = 0; str[i] != '\0'; i++) {
    if (str[i] == target) {
      pos = i;
    }
  }

  return pos;
}

int compare_by_sh_position(wchar_t *first, wchar_t *second) {
  return sh_position(first, L'ш') >= sh_position(second, L'ш') ? 1 : 0;
}
