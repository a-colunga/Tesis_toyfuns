#include <stdio.h>
#include <stdlib.h>
#include "toy.h"

#define STATIC_ALLOC(var_nm, sz) ub1 var_nm[sz*sizeof(ub1)];
#define DYNAMIC_ALLOC(var_nm, sz) ub1 *var_nm = (ub1*)malloc(sz*sizeof(ub1));

void randacc(ub1* arr, int idx)
{ 
  ub1 val = 0;
  
  val = arr[idx];
}

void randacc_cond(ub1* arr, int idx)
{ 
  ub1 val;
  
  if (idx > 10)
    val = arr[idx];
}

void randacc_mod(ub1* arr, int idx)
{ 
  ub1 val;
  
  idx -= 5;
  
  val = arr[idx];
}

void randacc_condmod(ub1* arr, int idx)
{ 
  ub1 val;
  
  idx -= 5;
  
  val = arr[idx];
}

void funacc(ub1* arr, int idx)
{ 
  memset(arr, 0, idx);
}

void funacc_cond(ub1* arr, int idx)
{ 
  if (idx > 10)
  { 
    memset(arr, 0, idx);
  }
}


void funacc_mod(ub1* arr, int idx)
{ 
  idx -= 5;
  
  memset(arr, 0, idx);
}

void funacc_condmod(ub1*arr, int idx)
{ 
  idx -= 5;
  
  if (idx > 10)
  { 
    memset(arr, 0, idx);
  }
}

void test_00000()
{ 
  STATIC_ALLOC(arr, 10);
  randacc(arr, 20);
}

void test_00001()
{
  STATIC_ALLOC(arr, 10);
  randacc_mod(arr, 20);
}

void test_00010()
{
  STATIC_ALLOC(arr, 10);
  randacc_cond(arr, 20);
}

void test_00011()
{
  STATIC_ALLOC(arr, 10);
  randacc_condmod(arr, 20);
}

void test_01000()
{
  STATIC_ALLOC(arr, 10);
  funacc(arr, 20);
}

void test_01001()
{
  STATIC_ALLOC(arr, 10);
  funacc_mod(arr, 20);
}

void test_01010()
{
  STATIC_ALLOC(arr, 10);
  funacc_cond(arr, 20);
}

void test_01011()
{
  STATIC_ALLOC(arr, 10);
  funacc_condmod(arr, 20);
}

void test_10000()
{
  DYNAMIC_ALLOC(arr, 10);
  randacc(arr, 20);
  free(arr);
}

void test_10001()
{
  DYNAMIC_ALLOC(arr, 10);
  randacc_mod(arr, 20);
  free(arr);
}

void test_10010()
{
  DYNAMIC_ALLOC(arr, 10);
  randacc_cond(arr, 20);
  free(arr);
}

void test_10011()
{
  DYNAMIC_ALLOC(arr, 10);
  randacc_condmod(arr, 20);
  free(arr);
}

void test_11000()
{
  DYNAMIC_ALLOC(arr, 10);
  funacc(arr, 20);
  free(arr);
}

void test_11001()
{
  DYNAMIC_ALLOC(arr, 10);
  funacc_mod(arr, 20);
  free(arr);
}

void test_11010()
{
  DYNAMIC_ALLOC(arr, 10);
  funacc_cond(arr, 20);
  free(arr);
}

void test_11011()
{
  DYNAMIC_ALLOC(arr, 10);
  funacc_condmod(arr, 20);
  free(arr);
}
