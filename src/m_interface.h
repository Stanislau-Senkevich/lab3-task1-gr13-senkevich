//
// Created by Stanislau Senkevich 24.02.2024
//

#ifndef M_INTERFACE_H
#define M_INTERFACE_H

#include "stddef.h"

// This function are used in main.c client file.
// Implementation is in m_server.c server file.

/// compare_by_sh_position
/// Function compares two strings by position of symbol "ш"
/// Arguments:
///    first - one string(char*)
///    second - another string(char*)
/// Return:
///    1, if first string has greater position of "ш"
///    0, if another
int compare_by_sh_position(wchar_t *first, wchar_t *second);

#endif