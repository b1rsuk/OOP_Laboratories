//
// Created by borsuk on 3/6/24.
//

#include "dyhotomia.h"
#include <cmath> // Для использования функции pow()

void Dyhotomia::setVolumes(double vol_a, double vol_b) {
    a = vol_a;
    b = vol_b;
}

void Dyhotomia::setTolerance(double vol_eps) {
    eps = vol_eps;
}

int Dyhotomia::count(double &x) {
    return pow(x, 2) / 4 + x - 1.2502;
}

Dyhotomia::Dyhotomia() {
}

Dyhotomia::~Dyhotomia() {
}
