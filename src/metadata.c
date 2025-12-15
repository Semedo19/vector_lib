#include <stdlib.h>
#include "vector_priv.h"

void *get_metadata(void *vector)
{
    if (vector == NULL)
        return NULL;
    return ((metadata_t *)(vector) - 1);
}

void *get_vector(void *metadata)
{
    if (metadata == NULL)
        return NULL;
    return ((char *)(metadata) + sizeof(metadata_t));
}
