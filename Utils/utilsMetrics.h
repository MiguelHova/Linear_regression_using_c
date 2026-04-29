#ifndef UTILS_METRICS_UTILS_H
#define UTILS_METRICS_UTILS_H

double mse(const double *y_true, const double *y_pred, int n);
double rmse(const double *y_true, const double *y_pred, int n);
double mae(const double *y_true, const double *y_pred, int n);
double r2_score(const double *y_true, const double *y_pred, int n);

#endif
