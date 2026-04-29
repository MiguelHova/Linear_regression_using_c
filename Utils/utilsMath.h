#ifndef UTILS_MATH_UTILS_H
#define UTILS_MATH_UTILS_H


// Computes the dot product between two vectors.
double dot(const double *a, const double *b, int n);


//Computes the mean (average) of a vector.
double mean(const double *x, int n);


//Computes the variance of a vector.
double variance(const double *x, int n);


//Computes the standard deviation of a vector.
double stddev(const double *x, int n);


//Returns the minimum value in a vector.
double min(const double *x, int n);


//Returns the maximum value in a vector.
double max(const double *x, int n);

#endif