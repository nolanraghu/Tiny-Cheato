#include "Card.h"


Card *Card::compare(Card& rhs) {
    Card *j = nullptr;
    if(cardValue > rhs.cardValue){
        j = this;

    } else if (rhs.cardValue > cardValue){
        j = &rhs;
    } else if (rhs.cardValue == cardValue){
        j = this->cardSuit > rhs.cardSuit ? this : &rhs;
    }
    return j;
}

CardPair::CardPair(Card c1, Card c2): card1(c1), card2(c2), highCard(c1.compare(c2)) {}