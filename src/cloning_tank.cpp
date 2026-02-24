#include "cloning_tank.hpp"

// Implement this:
void CloningTank::filter_op(std::vector<Monkey> &monkeys)
{
    int j = monkeys.size(); // meget vigtigt man ikke gør det i loopet.
    for (int i = 0; i < j; i++){ // Cloning tank ligesom i test filen.
       monkeys.push_back(monkeys[i]);
   }
}