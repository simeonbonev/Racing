#ifndef LLINKEDLIST_H_INCLUDED
#define LLINKEDLIST_H_INCLUDED

template <typename T>
struct Node
{
    T data;
    Node <T>* next;
};

template <typename T>
class LinkedList
{
private:
    Node<T> * start;
public:
    LinkedList();
    LinkedList(LinkedList const&);
    bool add(T);
    bool remove (int);
    void print();
    T getItem(int);
    ~LinkedList();
    void operator= (LinkedList const&);
};


#endif // LLINKEDLIST_H_INCLUDED
