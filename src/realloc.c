/*
** EPITECH PROJECT, 2025
** Lib vector
** File description:
** Update the capacity of a vector
*/

#include <unistd.h>
#include <stdlib.h>
#include <stdint.h>
#include "vector_priv.h"

void *vector_realloc(void *vector, size_t new_capacity)
{
    metadata_t *metadata = NULL;

    if (vector == NULL || new_capacity == 0)
        return NULL;
    metadata = GET_METADATA(vector);
    if (new_capacity < metadata->length)
        return NULL;
    if (SIZE_MAX / new_capacity < metadata->data_size)
        return NULL;
    metadata = realloc(metadata,
        sizeof(metadata_t) + metadata->data_size * new_capacity);
    if (metadata == NULL)
        return NULL;
    metadata->capacity = new_capacity;
    return GET_VECTOR(metadata);
}

void *vector_expand(void *vector, size_t nmemb)
{
    metadata_t *metadata = NULL;
    size_t new_capacity = 0;

    if (vector == NULL || nmemb == 0)
        return NULL;
    metadata = GET_METADATA(vector);
    if (SIZE_MAX - nmemb < metadata->length)
        return NULL;
    if (metadata->length + nmemb > metadata->capacity) {
        if (SIZE_MAX / 2 < metadata->capacity)
            return NULL;
        new_capacity = metadata->capacity * 2;
        if (metadata->length + nmemb > new_capacity)
            new_capacity = metadata->length + nmemb;
        vector = vector_realloc(vector, new_capacity);
        if (vector == NULL)
            return NULL;
        metadata = GET_METADATA(vector);
    }
    return vector;
}
