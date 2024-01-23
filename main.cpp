#include "Equation.h"
#include <iostream>

int main() {
    EquationSolver::LinearEquation linear;
    EquationSolver::QuadraticEquation quadratic;

    std::cout << "Solving linear equation..." << std::endl;
    linear.solve();

    std::cout << "\nSolving quadratic equation..." << std::endl;
    quadratic.solve();

    return 0;
}