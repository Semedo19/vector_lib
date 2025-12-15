/*
** EPITECH PROJECT, 2025
** Lib vector
** File description:
** Push data to the back of a vector
*/

#include <string.h>
#include "vector_priv.h"

void *vector_push_back(void *vector, void *data, size_t nmemb)
{
    metadata_t *metadata = NULL;

    if (vector == NULL || data == NULL || nmemb == 0)
        return NULL;
    vector = vector_expand(vector, nmemb);
    if (vector == NULL)
        return NULL;
    metadata = get_metadata(vector);
    memcpy((char *)vector + metadata->data_size * metadata->length,
        data, metadata->data_size * nmemb);
    metadata->length += nmemb;
    return vector;
}
