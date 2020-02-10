#include "solution.h"
#include <iostream>

void Game::print()
{
  for(int i = 0; i < 60; i++)
  std::cout << '*';
  std::cout << "\nVector: ";
  for(auto x : vect)
  std::cout << x << ' ';
  std::cout << '\n';
  for(int i = 0; i < 60; i++)
  std::cout << '*';
  std::cout << '\n' << "Please choose any of the following options:\n"
  <<"   1. What is the first element?\n"
  <<"   2. What is the last element?\n"
  <<"   3. What is the current element?\n"
  <<"   4. What is the ith element from the current loaction?\n"
  <<"   5. Exit\n";
  for(int i = 0; i < 60; i++)
  std::cout << '*';
  std::cout << std::endl;
  
}

void Game::start()
{
  flag = 0;
  while(flag != 5)
  {
    print();
    std::cin >> flag;
    if(flag == 1 || flag == 2 || flag == 3)
    {
      answer = get();//will return a number
    }

    if(flag == 4)
    {
      above = false;
      std::cout << "Enter the value of i: ";
      std::cin >> ith;
      answer = getith();//return a number
      if(above)
      {
        std::cout << "Sorry! You cannot traverse "<<ith<<" elements from your current location." << std::endl;
        continue;
      }
    }

    if(flag == 5)
    {
      std::cout << "EXIT!" << std::endl;
      break;
    }
    std::cout << "\nOutput: " << answer << std::endl;
  }

}

int Game::get()
{
  if(flag == 1)
  {
    it = vect.begin();
    return *it;
  }
  if(flag == 2)
  {
    it = vect.end();
    return *(--vect.end());
  }
  if(flag == 3)
  {
    if(it != vect.end())
    return *it;
    else
    return *(--vect.end());
    
  }
}

int Game::getith()
{
  if(it == vect.end())
  {
    above = true;
    return 0;
  }
  std::vector<int>::iterator temp = it;
  for(int i = ith; i > 0; i--)
  {
    it++;
    if(it == vect.end())
    {
      above = true;
      it = temp;
      return 0;
      break;
    }
  }
  return *it;
}