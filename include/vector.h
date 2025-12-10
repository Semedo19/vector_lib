/*
** EPITECH PROJECT, 2025
** Lib vector
** File description:
** header file
*/

#ifndef VECTOR_H
    #define VECTOR_H
    #include <unistd.h>

typedef struct vector_s {
    size_t data_size;
    size_t initial_capacity;
    size_t capacity;
    size_t length;
} vector_t;

    #define VECTOR_INFO(list)((char *)(list) - sizeof(vector_t))
    #define VECTOR_LIST(info)((char *)(info) + sizeof(vector_t))

#endif
