/*
** EPITECH PROJECT, 2025
** Lib vector
** File description:
** Destroy a vector
*/

#include <stdlib.h>
#include "vector_priv.h"

void vector_destroy(void *vector)
{
    if (vector != NULL)
        free(get_metadata(vector));
}
