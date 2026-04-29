#include "utilsMath.h"
#include <math.h>

double dot(const double *a, const double *b, int n) {
    if (n <= 0) return 0.0;

    double result = 0.0;

    for (int i = 0; i < n; i++) {
        result += a[i] * b[i];
    }

    return result;
}

double mean(const double *x, int n) {
    if (n <= 0) return 0.0;

    double sum = 0.0;

    for (int i = 0; i < n; i++) {
        sum += x[i];
    }

    return sum / n;
}

double variance(const double *x, int n) {
    if (n <= 0) return 0.0;

    double m = mean(x, n);
    double sum = 0.0;

    for (int i = 0; i < n; i++) {
        double diff = x[i] - m;
        sum += diff * diff;
    }

    return sum / n;
}

double stddev(const double *x, int n) {
    return sqrt(variance(x, n));
}

double min(const double *x, int n) {
    if (n <= 0) return 0.0;

    double min_val = x[0];

    for (int i = 1; i < n; i++) {
        if (x[i] < min_val) {
            min_val = x[i];
        }
    }

    return min_val;
}

double max(const double *x, int n) {
    if (n <= 0) return 0.0;

    double max_val = x[0];

    for (int i = 1; i < n; i++) {
        if (x[i] > max_val) {
            max_val = x[i];
        }
    }

    return max_val;
}