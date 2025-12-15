/*
** EPITECH PROJECT, 2025
** Lib vector
** File description:
** Destroy a vector
*/

#include <stdlib.h>
#include "_vector.h"

void vector_destroy(void *vector)
{
    free(get_metadata(vector));
}
