
#include "vector_3d.h"
#include <assert.h>
#include <string.h>
#include <stdio.h>

void main(void) {
    struct vector_3d v1 = {
        .x = 2,
        .y = 3,
        .z = 1
    };

    struct vector_3d v2 = {
        .x = 1,
        .y = -1,
        .z = 5
    };

    struct vector_3d result;

    sum(&v1, &v2, &result);
    assert(!memcmp(&(struct vector_3d){.x = 3, .y = 2, .z = 6}, &result, sizeof(struct vector_3d)));

    sub(&v1, &v2, &result);
    assert(!memcmp(&(struct vector_3d){.x = 1, .y = 4, .z = -4}, &result, sizeof(struct vector_3d)));
   
    assert(4 == dot(&v1, &v2));

    cross(&v1, &v2, &result);
    assert(!memcmp(&(struct vector_3d){.x = 16, .y = -9, .z = -5}, &result, sizeof(struct vector_3d)));

    printf("Test passed.\n");
}