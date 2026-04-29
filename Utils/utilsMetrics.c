#include"utilsMetrics.h"
#include<math.h>

//Mean squared error
double mse(const double *y_true, const double *y_pred, int n) {
    int i;
    double sum = 0.0;
    
    if (n <= 0) return 0.0;

    for(int i = 0; i < n; i++) {
        double error = y_true[i] - y_pred[i];
        sum += error * error;
    }

    return sum / n;
}

//Root mean squared error
double rmse(const double *y_true, const double *y_pred, int n) {
    int i;
    double sum = 0.0;
    
    if (n <= 0) return 0.0;

    for(int i = 0; i < n; i++) {
        double error = y_true[i] - y_pred[i];
        sum += error * error;
    }

    return sqrt(sum)/n;
}

//Mean absolute error
double mae(const double *y_true, const double *y_pred, int n) {
    int i; 
    double sum = 0.0;
    
    if (n <= 0) return 0.0;

    for (i = 0; i < n; i++) {
        double error = y_true[i] - y_pred[i];
        sum += fabs(error);
    }
}

//Coefficient of determination
double r2_score(const double *y_true, const double *y_pred, int n) {
        if (n <= 0) return 0.0;

    double mean = 0.0;

    for (int i = 0; i < n; i++) {
        mean += y_true[i];
    }
    mean /= n;

    double ss_res = 0.0; 
    double ss_tot = 0.0;

    for (int i = 0; i < n; i++) {
        double error = y_true[i] - y_pred[i];
        ss_res += error * error;

        double diff = y_true[i] - mean;
        ss_tot += diff * diff;
    }

    if (ss_tot == 0.0) return 0.0;
}
