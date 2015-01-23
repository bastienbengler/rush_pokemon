//
// main.cpp for main in /home/bengle_b/test/rush_pokemon
// 
// Made by Bengler Bastien
// Login   <bengle_b@epitech.net>
// 
// Started on  Wed Jan 21 19:16:04 2015 Bengler Bastien
// Last update Thu Jan 22 20:32:42 2015 Bengler Bastien
//

#include "linkedlist.hpp"

int	main()
{
  List<Pokedex> tmp;

  tmp.parserXML();
  tmp.dumplist();
}
