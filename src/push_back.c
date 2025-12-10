/*
** EPITECH PROJECT, 2025
** Lib vector
** File description:
** Push data to the back of a vector
*/

#include <string.h>
#include "vector_priv.h"

void *vector_push_back(void *vector, void *data)
{
    metadata_t *metadata = NULL;

    if (!vector || !data)
        return vector;
    metadata = GET_METADATA(vector);
    if (metadata->length >= metadata->capacity) {
        vector = vector_realloc(vector,
            metadata->capacity + metadata->initial_capacity);
        if (vector == NULL)
            return NULL;
        metadata = GET_METADATA(vector);
    }
    memcpy((char *)vector + metadata->data_size * metadata->length,
        data, metadata->data_size);
    ++(metadata->length);
    return vector;
}
