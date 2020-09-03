#include "pTableSim.h"



TableSimulator::TableSimulator(int s1, int v1, int s2, int v2, bool position)
    :positions(position), myHand(Card(s1, v1), Card(s2, v2)), myTable(Table().generate(position)){

}

Table *Table::generate(bool b) {
    if (b){
        return new TableChairs();
    } else {
        return new TableGeneral();
    }
    return nullptr;
}

int Table::remove(std::vector<Card> drawnCards) {
     discardPile.insert(discardPile.end(), drawnCards.begin(), drawnCards.end());
     return discardPile.size();
}
