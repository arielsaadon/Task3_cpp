#include "solver.hpp"

#include <complex>
#include <stdexcept>

solver::RealVariable solver::operator+(RealVariable FirstVariable, RealVariable SecondVariable){
    RealVariable newVariable;
    newVariable.a = FirstVariable.a + SecondVariable.a;
    newVariable.b = FirstVariable.b + SecondVariable.b;
    newVariable.c = FirstVariable.c + SecondVariable.c;
    return newVariable;
}

solver::RealVariable solver::operator-(RealVariable FirstVariable, RealVariable SecondVariable){
    RealVariable newVariable;
    newVariable.a = FirstVariable.a - SecondVariable.a;
    newVariable.b = FirstVariable.b - SecondVariable.b;
    newVariable.c = FirstVariable.c - SecondVariable.c;
    return newVariable;
}

solver::RealVariable solver::operator*(RealVariable FirstVariable, RealVariable SecondVariable){
    RealVariable newVariable;
    newVariable.a = FirstVariable.a * SecondVariable.c + SecondVariable.a * FirstVariable.c + FirstVariable.b * SecondVariable.b;
    newVariable.b = FirstVariable.b * SecondVariable.c + FirstVariable.c * SecondVariable.b;
    newVariable.c = FirstVariable.c * SecondVariable.c;
    return newVariable;
}

solver::RealVariable solver::operator/(RealVariable FirstVariable, RealVariable SecondVariable){
    RealVariable newVariable;
    newVariable.a = FirstVariable.a / SecondVariable.c;
    newVariable.b = FirstVariable.b / SecondVariable.c;
    newVariable.c = FirstVariable.c / SecondVariable.c;
    return newVariable;
}

solver::RealVariable solver::operator^(RealVariable NOTUSE, RealVariable Variable){
    if(Variable.c != 2){throw std::invalid_argument{"Power must be 2"};}
    
    RealVariable newVariable;
    newVariable.a = 1.0;
    newVariable.b = 0;
    return newVariable;
}

solver::RealVariable solver::operator==(RealVariable FirstVariable, RealVariable SecondVariable){
    RealVariable newVariable;
    return newVariable = FirstVariable-SecondVariable;
}

double solver::solve(RealVariable Variable){
    double a = Variable.getA();
    double b = Variable.getB();
    double c = Variable.getC();
    double solution;

    if((a == 0.0) && (b == 0.0))
        throw std::runtime_error{"There is no real solution"};
    else if(a == 0.0)
        solution = -c/b;
    else{
        double d = ((b*b) - (4.0*a*c));
        if(d >= 0)
            solution = ((-b+std::sqrt(d)) / (2.0*a));
        else 
        throw std::runtime_error{"There is no real solution"};
    }
    return solution;
}

/**
 ** Complex functions
 **/

solver::ComplexVariable solver::operator+(ComplexVariable FirstVariable, ComplexVariable SecondVariable){
    ComplexVariable newVariable;
    newVariable.a = FirstVariable.a + SecondVariable.a;
    newVariable.b = FirstVariable.b + SecondVariable.b;
    newVariable.c = FirstVariable.c + SecondVariable.c;
    return newVariable;
}

solver::ComplexVariable solver::operator-(ComplexVariable FirstVariable, ComplexVariable SecondVariable){
    ComplexVariable newVariable;
    newVariable.a = FirstVariable.a - SecondVariable.a;
    newVariable.b = FirstVariable.b - SecondVariable.b;
    newVariable.c = FirstVariable.c - SecondVariable.c;
    return newVariable;
}

solver::ComplexVariable solver::operator*(ComplexVariable FirstVariable, ComplexVariable SecondVariable){
    ComplexVariable newVariable;
    newVariable.a = FirstVariable.a * SecondVariable.c + SecondVariable.a * FirstVariable.c + FirstVariable.b * SecondVariable.b;
    newVariable.b = FirstVariable.b * SecondVariable.c + FirstVariable.c * SecondVariable.b;
    newVariable.c = FirstVariable.c * SecondVariable.c;
    return newVariable;
}

solver::ComplexVariable solver::operator/(ComplexVariable FirstVariable, ComplexVariable SecondVariable){
    ComplexVariable newVariable;
    newVariable.a = FirstVariable.a / SecondVariable.c;
    newVariable.b = FirstVariable.b / SecondVariable.c;
    newVariable.c = FirstVariable.c / SecondVariable.c;
    return newVariable;
}

solver::ComplexVariable solver::operator^(ComplexVariable NOTUSE, ComplexVariable Variable){
    if(Variable.c.real() != 2){throw std::invalid_argument("Power must be 2");}

    ComplexVariable newVariable;
    newVariable.a = 1.0;
    newVariable.b = 0;

    return newVariable;
}

solver::ComplexVariable solver::operator==(ComplexVariable FirstVariable, ComplexVariable SecondVariable){
    ComplexVariable newVariable;
    return newVariable = FirstVariable-SecondVariable;
}

std::complex<double> solver::solve(ComplexVariable Variable){
    std::complex<double> a = Variable.getA();
    std::complex<double> b = Variable.getB();
    std::complex<double> c = Variable.getC();
    std::complex<double> solution;

    if((a.real() == 0.0) && (b.real() == 0.0) && (a.imag() == 0.0) && (b.imag() == 0.0))
        throw std::runtime_error{"There is no real solution"};
    else if((a.real() == 0.0) && (a.imag() == 0.0))
        solution = -c/b;
    else{
        std::complex<double> d = std::sqrt((b*b) - (4.0*a*c));
        solution = ((-b+d) / (2.0*a));
    }
    return solution;
}