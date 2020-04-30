#pragma once

#include <complex>

using namespace std;

namespace solver{
    class RealVariable{
    private:
        double number;
    public:
        RealVariable(){}
        RealVariable(double number):number(number){}


        friend RealVariable operator +(const RealVariable &, const RealVariable &);
        friend RealVariable operator +(const RealVariable &, const double);
        friend RealVariable operator +(const double, const RealVariable &);
        friend RealVariable operator -(const RealVariable &, const RealVariable &);
        friend RealVariable operator -(const RealVariable &, const double);
        friend RealVariable operator-(const double y, const RealVariable& x);
        friend RealVariable operator *(const double, const RealVariable &);
        friend RealVariable operator /(const RealVariable &, const double);
        friend RealVariable operator ^(RealVariable const &, const double);
        friend RealVariable operator ==(const RealVariable &, const RealVariable &);
        friend RealVariable operator ==(const RealVariable &, const double);
        friend RealVariable operator ==(const double y, const RealVariable& x);

    };

    class ComplexVariable{
    private:
        double realNumber;
        double imagNumber;
    public:
        ComplexVariable(double realNumber = 0,double imagNumber = 0):realNumber(realNumber),imagNumber(imagNumber){}



    friend ComplexVariable operator +(const ComplexVariable &, const ComplexVariable &);
    friend ComplexVariable operator +(const ComplexVariable &, const int);
    friend ComplexVariable operator +(const int, const ComplexVariable &);
    friend ComplexVariable operator +(const ComplexVariable &, std::complex<double>);
    friend ComplexVariable operator -(const ComplexVariable &, const ComplexVariable &);
    friend ComplexVariable operator -(const ComplexVariable &, const int);
    friend ComplexVariable operator *(const int, ComplexVariable const &);
    friend ComplexVariable operator /(ComplexVariable const &, const int);
    friend ComplexVariable operator^(ComplexVariable const &, const int);
    friend ComplexVariable operator ==(const ComplexVariable &, const int);
    friend ComplexVariable operator ==(const ComplexVariable &, const ComplexVariable &);
    };


    std::complex<double> solve(ComplexVariable);
    double solve(RealVariable );

 
}