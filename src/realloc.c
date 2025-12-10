/*
** EPITECH PROJECT, 2025
** Lib vector
** File description:
** Update the capacity of a vector
*/

#include <unistd.h>
#include <stdlib.h>
#include "vector_priv.h"
#include "vector.h"

void *vector_realloc(void *vector, size_t new_capacity)
{
    metadata_t *metadata = NULL;

    if (vector == NULL || new_capacity == 0)
        return vector;
    metadata = GET_METADATA(vector);
    if (new_capacity < metadata->length)
        return vector;
    metadata = realloc(metadata,
        sizeof(metadata_t) + metadata->data_size * new_capacity);
    if (metadata == NULL) {
        vector_destroy(vector);
        return NULL;
    }
    metadata->capacity = new_capacity;
    return GET_VECTOR(metadata);
}
