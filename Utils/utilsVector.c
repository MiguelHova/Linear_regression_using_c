#include "utilsVector.h"

// Adds two vectors
void vector_add(const double *a, const double *b, double *result, int n) {
    if (n <= 0) return;

    for (int i = 0; i < n; i++) {
        result[i] = a[i] + b[i];
    }
}

// Subtracts two vectors (make sure they are the same size)
void vector_sub(const double *a, const double *b, double *result, int n) {
    if (n <= 0) return;

    for (int i = 0; i < n; i++) {
        result[i] = a[i] - b[i];
    }
}

// Multiplies a vector by a scalar
void scalar_mul(double *v, double scalar, int n) {
    if (n <= 0) return;

    for (int i = 0; i < n; i++) {
        v[i] *= scalar;
    }
}

// Copies one vector to another
void vector_copy(const double *src, double *dest, int n) {
    if (n <= 0) return;

    for (int i = 0; i < n; i++) {
        dest[i] = src[i];
    }
}

// Fills a vector with a constant value
void vector_fill(double *v, double value, int n) {
    if (n <= 0) return;

    for (int i = 0; i < n; i++) {
        v[i] = value;
    }
}