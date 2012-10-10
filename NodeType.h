#pragma once
#ifndef NODETYPE_H
#define NODETYPE_H

#include <cstddef>
using namespace std;

// templated struct for nodes
template <typename ItemType>
struct NodeType
  {
   ItemType info;
   NodeType<ItemType> *next;
  };
#endif