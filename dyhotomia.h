//
// Created by borsuk on 3/6/24.
//

#ifndef DYHOTOMIA_H
#define DYHOTOMIA_H



class Dyhotomia {
private:
    double a;
    double b;
    double eps;

public:
    Dyhotomia();
    ~Dyhotomia();

public:
    void setVolumes(double vol_a, double vol_b);
    void setTolerance(double vol_eps);
    int count(double &x);
};



#endif //DYHOTOMIA_H
