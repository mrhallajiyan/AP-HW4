#ifndef NODE_H
#define NODE_H

template <typename T>
class Node
{
public:
  T value;
  Node<T> *previous;

public:
  Node();
  ~Node();
  Node(const T &, Node<T> *);
};

#endif