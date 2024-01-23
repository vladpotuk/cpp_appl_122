#ifndef EQUATION_H
#define EQUATION_H

namespace EquationSolver {

    class Equation {
    public:
        virtual void solve() const = 0;
        virtual ~Equation() {}
    };

    class LinearEquation : public Equation {
    private:
        double a, b;

    public:
        LinearEquation();
        void solve() const override;
    };

    class QuadraticEquation : public Equation {
    private:
        double a, b, c;

    public:
        QuadraticEquation();
        void solve() const override;
    };

}

#endif // EQUATION_H
