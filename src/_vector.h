/*
** EPITECH PROJECT, 2025
** Lib vector
** File description:
** header file
*/

#ifndef _VECTOR_H
    #define _VECTOR_H
    #include <unistd.h>

typedef struct metadata_s {
    size_t data_size;
    size_t capacity;
    size_t length;
} metadata_t;

void *get_metadata(void *vector);
void *get_vector(void *metadata);

void *vector_expand(void *vector, size_t nmemb);
#endif
