#include "LinkedList.h"
#include <iostream>

using namespace std;

// Има грешка. На едно място дава segmentation fault (пипа се чужда памет),
// трябва да бъде оправена. Ще има бонус за човека, който я оправи.

template <typename T>
LinkedList <T>:: LinkedList()
{
    start = end = NULL;
}

template <typename T>
LinkedList <T>:: LinkedList (LinkedList const& a)
{
    *this = a;
}

template<typename T>
LinkedList<T>& LinkedList<T>::operator=(LinkedList<T> const& l)
{
    if(!isEmpty())
    {
        del();
    }
    start = new Node<T>;
    Node <T>* iterator = l.getStart();
    while (iterator != NULL)
    {
        add(iterator->data);
        iterator = iterator-> next;
    }
    return *this;
}

template <typename T>
void LinkedList<T>:: add (T _data)
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
bool LinkedList <T>:: isEmpty()
{
    return start==NULL;
}

template <typename T>
bool LinkedList <T>:: remove (int index)
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
void LinkedList <T>:: print()
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
bool LinkedList <T>:: getItem (int index , T& result)
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
LinkedList <T>:: ~LinkedList ()
{
    del();
}
template<typename T>
void LinkedList<T>::del()
{
    Node<T>* temp=start;
    Node<T>* next=start->next;
    while(temp!=NULL)
    {
        delete temp;
        temp = next;
        if(next != NULL)
            next = next->next;
    }
}
