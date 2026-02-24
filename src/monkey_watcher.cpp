#include "monkey_watcher.hpp"

// Implement this:
void MonkeyWatcher::filter_op(std::vector<Monkey> &monkeys) // RIP harambe
{
    for (int i = 0; i < monkeys.size(); i++){ //Implementeret det her smarte halløjsa, så vi smider det hele over i den private vector

        this->monkeys_seen.push_back(monkeys[i]);
    }
    for (int i = 0; i < monkeys.size(); i++) { // popper lige fra input vectoren lidt clean up
        monkeys.pop_back();
    }
}

const std::vector<Monkey> &MonkeyWatcher::get_monkeys_seen() const
{
    return this->monkeys_seen;
}