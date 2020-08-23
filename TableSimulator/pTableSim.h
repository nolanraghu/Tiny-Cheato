class Table{
  public:
  virtual int* generate()
};


class TableSimulator{
  private:
    bool positions;

  public:
    TableSimulator(int s1, int v1, int s2, int v2, bool position = true);
    Table* generate();


};

class TableGeneral {

};

class TableChairs{

};
