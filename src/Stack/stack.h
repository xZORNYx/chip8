//
// Created by Student on 07.09.2023.
//

#ifndef ALEXZORN_CHIP8_STACK_H
#define ALEXZORN_CHIP8_STACK_H
#include <stdint.h>

struct Stack {
    uint8_t content[64];
    int top;
};

/*
 * Param: stack ( struct Stack ) Stack that will be checked
 * Returns: <true> if <stack> is empty, else returns <false>
 */
_Bool isEmpty( struct Stack stack );

/*
 * Param: stack ( struct Stack ) Stack that will be checked
 * Returns: <true> if <stack> is full, else returns <false>
 */
_Bool isFull( struct Stack stack );

/*
 * Param: stack ( struct Stack ) stack in which <value> will be pushed
 * Param: value ( unit8_t ) Value to be added to the stack
 * Returns: 0 if <value> has been added to <stack>, if <stack> is already full, returns 1
 */
int push( struct Stack stack, uint8_t value );

/*
 * Param: stack ( struct Stack ) stack from which the last element will be removed
 * Returns: 0 if thee last value from <stack> has been removed, if <stack> is already empty, returns 1
 */
int pop( struct Stack stack );

/*
 * Param: stack ( struct Stack ) Stack that will be checked
 * Returns: the <index> of the top element of the <stack>
 */
uint8_t top( struct Stack stack );

#endif //ALEXZORN_CHIP8_STACK_H





