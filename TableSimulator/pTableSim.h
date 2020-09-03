#include <iterator>
#include <vector>
#include "Card.h"



//Abstract Class that runs the card calculations
 class Table{
 protected:
   /*I figured it would be too slow to calculate probabilities based on
     all of the calls in the deck and do it beased on the ones already seen instead
     */
    std::vector<Card> discardPile;
  public:

    //Should add a card to the discardPile
    int remove(std::vector<Card> drawnCards);

    //Constructor (b = true means it's a TableChairs)
    Table* generate(bool b);

};

//This should be the class that the mobile IOS calls. I highkey don't know
// how to call c++ interfaces from Swift yet so I would like it to be pretty
// abstracted and straight-forward (i.e. only require playing with the TableSimulator
// class)
class TableSimulator{
  private:
    bool positions;
    Table* myTable;
    CardPair myHand;

  public:
    TableSimulator(int s1, int v1, int s2, int v2, bool position = false);
    float analyze();


};

//So apparently in 'poker strategy' you actually play differently depending on
//your chair (i.e. big blind, small blind, under the gun)
// and so I created a 'TableGeneral' (if the user doens't feel like entering
// position) and one that does take position into consideration 'TableChairs'
class TableGeneral: public Table {


};


class TableChairs: public Table {

};
