/*
** EPITECH PROJECT, 2025
** Lib vector
** File description:
** header file
*/

#ifndef VECTOR_H
    #define VECTOR_H
    #include <unistd.h>
    #include "vector_priv.h"

void *vector_create(size_t data_size, size_t initial_capacity);
void *vector_realloc(void *vector, size_t new_capacity);
void vector_destroy(void *vector);

void *vector_push_back(void *vector, void *data, size_t nmemb);
#endif
