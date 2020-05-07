#pragma once

#include <iostream>
#include <complex>

namespace solver {
    class RealVariable {
        double a=0.0;
        double b=1.0;
        double c=0.0;

    public:
        RealVariable()= default;
        RealVariable(double number):a(0.0), b(0.0), c(number){}

        double getA() const{return a;}
        double getB() const{return b;}
        double getC() const{return c;}

        friend RealVariable operator+(RealVariable FirstVariable,RealVariable SecondVariable);
        friend RealVariable operator-(RealVariable FirstVariable, RealVariable SecondVariable);
        friend RealVariable operator*(RealVariable FirstVariable, RealVariable SecondVariable);
        friend RealVariable operator/(RealVariable FirstVariable, RealVariable SecondVariable);
        friend RealVariable operator==(RealVariable FirstVariable, RealVariable SecondVariable);
        friend RealVariable operator^(RealVariable NOTUSE, RealVariable Variable);

    };
    class ComplexVariable {
    private:
        std::complex<double> a=0.0;
        std::complex<double> b=1.0;
        std::complex<double> c=0.0;

    public:
        ComplexVariable()= default;
        ComplexVariable(double number):a(0.0), b(0.0), c(number){}
        ComplexVariable(std::complex<double> number):a(0.0), b(0.0), c(number){}

        std::complex<double> getA(){return a;}
        std::complex<double> getB(){return b;}
        std::complex<double> getC(){return c;}

        friend ComplexVariable operator+(ComplexVariable FirstVariable, ComplexVariable SecondVariable);
        friend ComplexVariable operator-(ComplexVariable FirstVariable, ComplexVariable SecondVariable);
        friend ComplexVariable operator*(ComplexVariable FirstVariable, ComplexVariable SecondVariable);
        friend ComplexVariable operator/(ComplexVariable FirstVariable, ComplexVariable SecondVariable);
        friend ComplexVariable operator==(ComplexVariable FirstVariable, ComplexVariable SecondVariable);
        friend ComplexVariable operator^(ComplexVariable NOTUSE, ComplexVariable Variable);
    };
    double solve(RealVariable Variable);
    std::complex<double> solve(ComplexVariable Variable);
}