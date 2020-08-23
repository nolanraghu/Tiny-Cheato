
enum Suit { Diamonds, Hearts, Clubs, Spades };


class Card{
public:
  Suit cardSuit;
  int cardValue;
  Card(int s, int v): cardSuit(static_cast<Suit>(s)), cardValue(v) {};

};

class CardPair{
public:
  Card card1;
  
};
