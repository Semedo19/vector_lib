/*
** EPITECH PROJECT, 2025
** Lib vector
** File description:
** header file
*/

#ifndef VECTOR_PRIV_H
    #define VECTOR_PRIV_H
    #include <unistd.h>

typedef struct metadata_s {
    size_t data_size;
    size_t capacity;
    size_t length;
} metadata_t;

    #define GET_METADATA(vector)((metadata_t *)(vector) - 1)
    #define GET_VECTOR(metadata)((char *)(metadata) + sizeof(metadata_t))

void *vector_expand(void *vector, size_t nmemb);
#endif
