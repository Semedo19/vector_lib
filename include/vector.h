/*
** EPITECH PROJECT, 2025
** Lib vector
** File description:
** header file
*/

#ifndef VECTOR_H
    #define VECTOR_H
    #include <unistd.h>

typedef struct metadata_s {
    size_t data_size;
    size_t initial_capacity;
    size_t capacity;
    size_t length;
} metadata_t;

    #define GET_METADATA(vector)((char *)(vector) - sizeof(metadata_t))
    #define GET_VECTOR(metadata)((char *)(metadata) + sizeof(metadata_t))

#endif
