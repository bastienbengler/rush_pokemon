//
// linkedlist.hpp for linkedlist in /home/bengle_b/test/template_linkedlist
// 
// Made by Bengler Bastien
// Login   <bengle_b@epitech.net>
// 
// Started on  Wed Jan 21 15:57:53 2015 Bengler Bastien
// Last update Thu Jan 22 20:26:08 2015 Bengler Bastien
//

#ifndef LINKEDLIST_HPP_
# define LINKEDLIST_HPP_

#include <iostream>
#include "Pokedex.hpp"
#include "Pokemon.hpp"

template<typename T>
class	List
{
public:
  List();
  ~List();
  void putInList(const Pokemon& pokemon);
  void dumplist();
  void parserXML();
  void parseIdPokemon(const std::string&, Pokemon&);
  void parseNamePokemon(const std::string&, Pokemon&);

private:
  T* list;
};

#endif /* LINKEDLIST_HPP_ */
