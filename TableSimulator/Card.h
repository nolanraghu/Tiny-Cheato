

//Suit rankings: clubs->diamonds->hearts->Spades

enum Suit { Clubs,Diamonds,Hearts, Spades };


class Card{
public:
  Suit cardSuit;
  int cardValue;
  //if you want to cast an int into Suit, do suit = static_cast<Suit>(int);
  Card(int s, int v): cardSuit(static_cast<Suit>(s)), cardValue(v) {};
  Card* compare(Card& rhs);
};

class CardPair{
public:
  Card card1;
  Card card2;
  Card* highCard;
  CardPair(Card c1, Card c2);

};
