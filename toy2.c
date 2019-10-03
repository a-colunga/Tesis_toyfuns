#include <stdio.h>
#include <stdlib.h>
#include "toy.h"

#define STATIC_ALLOC(var_nm, sz) ub1 var_nm[sz*sizeof(ub1)];
#define DYNAMIC_ALLOC(var_nm, sz) ub1 *var_nm = (ub1*)malloc(sz*sizeof(ub1));

void test_00100()
{
  STATIC_ALLOC(arr, 10);
  randacc(arr, 20);
}

void test_00101()
{
  STATIC_ALLOC(arr, 10);
  randacc_mod(arr, 20);
}

void test_00110()
{
  STATIC_ALLOC(arr, 10);
  randacc_cond(arr, 20);
}

void test_00111()
{
  STATIC_ALLOC(arr, 10);
  randacc_condmod(arr, 20);
}

void test_01100()
{
  STATIC_ALLOC(arr, 10);
  funacc(arr, 20);
}

void test_01111()
{
  STATIC_ALLOC(arr, 10);
  funacc_condmod(arr, 20);
}

void test_10100()
{
  DYNAMIC_ALLOC(arr, 1);
  randacc(arr, 20);
  free(arr);
}

void test_10101()
{
  DYNAMIC_ALLOC(arr, 10);
  randacc_mod(arr, 20);
  free(arr);
}

void test_10110()
{
  DYNAMIC_ALLOC(arr, 10);
  randacc_cond(arr, 20);
  free(arr);
}

void test_10111()
{
  DYNAMIC_ALLOC(arr, 10);
  randacc_condmod(arr, 20);
  free(arr);
}

void test_11100()
{
  DYNAMIC_ALLOC(arr, 10);
  funacc(arr, 20);
  free(arr);
}

void test_11101()
{
  DYNAMIC_ALLOC(arr, 10);
  funacc_mod(arr, 20);
  free(arr);
}

void test_11110()
{
  DYNAMIC_ALLOC(arr, 10);
  funacc_cond(arr, 20);
  free(arr);
}

void test_11111()
{
  DYNAMIC_ALLOC(arr, 10);
  funacc_condmod(arr, 20);
  free(arr);
}
