#include "cloning_tank.hpp"

// Implement this:
void CloningTank::filter_op(std::vector<Monkey> &monkeys)
{
    for (int i = 0; i < monkeys.size(); i++){ // Cloning tank ligesom i test filen.
        monkeys.push_back(monkeys[i]);
    }
}