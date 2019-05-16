#include"node.h"

template <typename T>
Node<T>::Node(){

}

template <typename T>
Node<T>::~Node(){

}

template <typename T>
Node<T>::Node(const T &value_, Node<T> *previous_)
    : value{value_}, previous{previous_}{
        
    }