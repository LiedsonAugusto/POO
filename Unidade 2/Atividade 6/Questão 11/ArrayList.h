#ifndef ARRAYLIST_H
#define ARRAYLIST_H

class ArrayList
{
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