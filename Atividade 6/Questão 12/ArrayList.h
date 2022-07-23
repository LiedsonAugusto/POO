#ifndef ARRAYLIST_H
#define ARRAYLIST_H

class ArrayList
{

  friend void somaArray(ArrayList &, int);
  friend void subArray(ArrayList &, int);
  friend void mulArray(ArrayList &, int);
  friend void divArray(ArrayList &, int);

public:
  ArrayList(int);
  ~ArrayList();

  ArrayList &add(int);

  void print() const;

  int busca(int) const;

  void remove(int);

  void removeEl(int);

private:
  int *arr;
  int tam;
  int pos;
};

#endif