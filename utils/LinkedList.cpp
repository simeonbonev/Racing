#include "LlinkedList.h"
#include <iostream>

using namespace std;

template <typename T>
LinkedList :: LinkedList()
{
    start = end = NULL;
}

template <typename T>
LinkedList :: LinkedList (LinkedList const& a)
{
    start = new Node<T>;
    Node <T>* iterator = a.getStart();
    while (iterator != NULL)
    {
        add(iterator->data);
        iterator = iterator-> next;
    }
}

template <typename T>
void LinkedList:: add (T _data)
{
    if (!isEmpty())
    {
        Node<T>* temp = new Node<T>;
        temp-> data = _data;
        temp-> next = NULL;
        end -> next = temp;
        end = temp;
    }
    else
    {
        start = new Node<T>;
        start-> data = _data;
        start-> next = NULL;
        end = start;
    }
}

template <typename T>
bool LinkedList :: isEmpty()
{
    return start==NULL;
}

template <typename T>
bool LinkedList :: remove (int index)
{
    Node<T>* iter= start;
    if (isEmpty()) return false;
    for (int i = 0; i< index-1 ; i++)
    {
        if(iter -> next == NULL)
        {
            return false;
        }
        else
        {
            iter = iter -> next;
        }
    }
    Node<T>* temp = iter -> next;
    iter -> next = temp -> next;
    delete temp;
    return true;
}

template <typename T>
void LinkedList :: print()
{
    Node<T>* iter = start;
    while(iter != NULL)
    {
        cout << iter -> data << " ";
        iter = iter->next;
    }
    cout << endl;
}

template <typename T>
bool LinkedList :: getItem (int index , T& result)
{
    if(isEmpty())
        return false;
    Node<T>* iter = start;
    for(int i=0; i<index; i++)
    {
        if(iter->next = NULL)
        {
            return false;
        }
        iter = iter->next;
    }
    result = iter->data;
    return true;
}

// da se dovurshi
template <typename T>
LinkedList :: ~LinkedList ()
{
    Node <
}
