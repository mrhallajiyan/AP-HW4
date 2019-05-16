#include"stack.h"

template <typename T>
Stack<T>::Stack() : last{nullptr}, count{}
{
}

template <typename T>
Stack<T>::~Stack()
{
    for (int i = 0; i < count; i++)
    {
        Node<T> *temp{last->previous};
        delete last;
        last = temp;
    }
}

template <typename T>
void Stack<T>::push(const T &value)
{
    Node<T> *temp{new Node<T>{value, last}};
    last = temp;
    count++;
}

template <typename T>
bool Stack<T>::isEmpty()
{
    return !count;
}

template <typename T>
T Stack<T>::pop()
{
    T value{last->value};
    Node<T> *temp{last};
    last = last->previous;
    delete temp;
    count--;
    return value;
}

template <typename T>
int Stack<T>::getCount()
{
    return count;
}