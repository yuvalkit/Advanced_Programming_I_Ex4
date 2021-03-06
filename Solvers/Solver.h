
#ifndef ADVANCED_PROGRAMMING_EX4_SOLVER_H
#define ADVANCED_PROGRAMMING_EX4_SOLVER_H

/**
 * Solver interface
 */
template <class Problem, class Solution>
class Solver {
public:
    virtual Solution solve(Problem problem) = 0;
    virtual Solver<Problem,Solution>* getClone() = 0;
    virtual ~Solver() {}
};


#endif //ADVANCED_PROGRAMMING_EX4_SOLVER_H
