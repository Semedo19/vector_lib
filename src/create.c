/*
** EPITECH PROJECT, 2025
** Lib vector
** File description:
** Create a vector
*/

#include <unistd.h>
#include <stdlib.h>
#include "vector_priv.h"

void *vector_create(size_t data_size, size_t initial_capacity)
{
    metadata_t *metadata = NULL;

    if (data_size == 0 || initial_capacity == 0)
        return NULL;
    metadata = calloc(sizeof(metadata_t) + data_size * initial_capacity, 1);
    if (metadata == NULL)
        return NULL;
    metadata->data_size = data_size;
    metadata->capacity = initial_capacity;
    metadata->length = 0;
    return (void *)(GET_VECTOR(metadata));
}
