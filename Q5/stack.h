#ifndef STACK_H
#define STACK_H
#include"node.h"

template <typename T>
class Stack
{
private:
  Node<T> *last;
  int count;

public:
  Stack();
  ~Stack();

  void push(const T &);
  bool isEmpty();
  T pop();
  int getCount();
};

#endif 