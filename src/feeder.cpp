#include "feeder.hpp"

// Implement this:
void Feeder::filter_op(std::vector<Monkey> &monkeys)
{
    for (int i = 0; i < monkeys.size(); i++){ // tager lige deres hunger level et niveau ned.
        monkeys[i].hunger_level--;
    }
    
}