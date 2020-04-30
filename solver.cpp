#include "solver.hpp"

#include <iostream>
#include <complex>

using solver::RealVariable, solver::ComplexVariable;

    RealVariable solver::operator +(const RealVariable &x, const RealVariable &y){return RealVariable();}
    RealVariable solver::operator +(const RealVariable &x, const double){return RealVariable();}
    RealVariable solver::operator +(const double y, const RealVariable &x){return RealVariable();}
    RealVariable solver::operator -(const RealVariable &x, const RealVariable& y){return x;}
    RealVariable solver::operator -(const RealVariable & x, const double y){return x;}
    RealVariable solver::operator -(const double y, const RealVariable& x){return x;}
    RealVariable solver::operator *(const double y, const RealVariable& x){return x;}
    RealVariable solver::operator /( const RealVariable & ,const double){return RealVariable();}
    RealVariable solver::operator ^(RealVariable const &, const double){return RealVariable();}
    RealVariable solver::operator ==(const RealVariable& x, const RealVariable& y){return x;}
    RealVariable solver::operator ==(const RealVariable& x, const double y){return x;}
    RealVariable solver::operator ==(const double y, const RealVariable& x){return y;}


    ComplexVariable solver::operator +(const ComplexVariable &, const ComplexVariable &){return ComplexVariable();}
    ComplexVariable solver::operator +(const ComplexVariable &, const int){return ComplexVariable();}
    ComplexVariable solver::operator +(const int, const ComplexVariable &){return ComplexVariable();}
    ComplexVariable solver::operator +(const ComplexVariable &, complex<double>){return ComplexVariable();}
    ComplexVariable solver::operator -(const ComplexVariable &, const ComplexVariable &){return ComplexVariable();}
    ComplexVariable solver::operator -(const ComplexVariable &, const int){return ComplexVariable();}
    ComplexVariable solver::operator*(const int, ComplexVariable const &) {return ComplexVariable();}
    ComplexVariable solver::operator /(ComplexVariable const &, const int){return ComplexVariable();}
    ComplexVariable solver::operator^(ComplexVariable const &, const int) {return ComplexVariable();}
    ComplexVariable solver::operator ==(const ComplexVariable &, const int){return ComplexVariable();}
    ComplexVariable solver::operator ==(const ComplexVariable &, const ComplexVariable &){return ComplexVariable();}

    complex<double> solver::solve(ComplexVariable) {return complex<double>();}

    double solver::solve(const RealVariable x) {return 0.0;}