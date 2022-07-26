#ifndef INTEGERSET_H
#define INTEGERSET_H

class IntegerSet{

  friend IntegerSet unionOfSets(const IntegerSet &, const IntegerSet &);
  friend IntegerSet intersectionOfSets(const IntegerSet &, const IntegerSet &);

  public:

    IntegerSet();
    IntegerSet(int[], int);

    ~IntegerSet();

    void insertElement(int);

    void deleteElement(int);

    void print() const;

    const IntegerSet &operator<<(int);

    const IntegerSet &operator>>(int);

    const IntegerSet operator|(const IntegerSet &);

    const IntegerSet operator&(const IntegerSet &);

  private:
    int *array;
};


#endif