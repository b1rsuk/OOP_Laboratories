#include <iostream>
#include "dyhotomia.h"

int main() {
    double a = 0;
    double b = 2;
    double eps = 0.3;

    Dyhotomia * dyhotomia = new Dyhotomia();
    dyhotomia ->setVolumes(a, b);
    dyhotomia ->setTolerance(eps);

    if (dyhotomia->count(a) * dyhotomia->count(b) > 0) {
        std::cout << "Solution not found";
        return 0;
    }

    while (!(std::abs(b - a) <= eps)) {
        double c = (a + b)/2;
        if (dyhotomia->count(a) * dyhotomia->count(c) < 0) {
            b = c;
        } else {
            a = c;
        }
    }

    double x = (a + b) /2;
    std::cout << "Result: " << x;
    delete dyhotomia;
    return 0;
}
