#ifndef TEMPLATE_SOLUTION_H
#define TEMPLATE_SOLUTION_H

#include <string>
#include <vector>

class Game {
public:
  std::vector<int> vect;
  int ith;
  int flag;
  int answer;
  bool above;//see if ith is above the size
  std::vector<int>::iterator it;

  Game(const std::vector<int> &v):vect(v){
    it = vect.begin();
  }

  void print();
  void start();
  int get();
  int getith();
};

#endif