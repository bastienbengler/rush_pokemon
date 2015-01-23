//
// Pokedex.hpp for Pokedex in /home/bengle_b/test/rush_pokemon
// 
// Made by Bengler Bastien
// Login   <bengle_b@epitech.net>
// 
// Started on  Wed Jan 21 19:10:20 2015 Bengler Bastien
// Last update Fri Jan 23 19:46:09 2015 Bengler Bastien
//

#ifndef POKEDEX_HPP_
# define POKEDEX_HPP_

#include "Pokemon.hpp"

class	Pokedex
{ 
public:
  Pokedex* next;
  Pokedex* prev;
  Pokemon *pokemon;
  void setRoot(const int root);
  int getRoot() const;
private:
  int _root;
};


#endif /* !POKEDEX_HPP_ */
