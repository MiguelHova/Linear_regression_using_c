#ifndef UTILS_VECTOR_UTILS_H
#define UTILS_VECTOR_UTILS_H

// Adds two vectors: result[i] = a[i] + b[i]
void vector_add(const double *a, const double *b, double *result, int n);

// Subtracts two vectors: result[i] = a[i] - b[i]
void vector_sub(const double *a, const double *b, double *result, int n);

// Multiplies a vector by a scalar: v[i] *= scalar
void scalar_mul(double *v, double scalar, int n);

// Copies vector src into dest
void vector_copy(const double *src, double *dest, int n);

// Fills a vector with a constant value
void vector_fill(double *v, double value, int n);

#endif
