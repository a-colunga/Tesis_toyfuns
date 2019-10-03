#ifndef TOY_TEST
# define TOY_TEST

#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <string.h>

#define ub1 uint32_t

void randacc(ub1* arr, int idx);

void randacc_cond(ub1* arr, int idx);

void randacc_mod(ub1* arr, int idx);

void randacc_condmod(ub1* arr, int idx);

void funacc(ub1* arr, int idx);

void funacc_cond(ub1* arr, int idx);

void funacc_mod(ub1* arr, int idx);

void funacc_condmod(ub1* arr, int idx);

#endif