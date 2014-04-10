#ifndef LINKEDLIST_H_INCLUDED
#define LINKEDLIST_H_INCLUDED

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
    Node<T> * end;
    void del();
public:
    LinkedList();
    LinkedList(LinkedList const&);
    void add(T);
    bool remove (int);
    void print();
    bool isEmpty();
    bool getItem(int,T&);
    ~LinkedList();
    LinkedList& operator= (LinkedList const&);
};

#endif // LINKEDLIST_H_INCLUDED
